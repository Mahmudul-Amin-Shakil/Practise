#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};
class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea()
    {
        return width * height;
    }
    double getPerimeter()
    {
        return 2 * (width + height);
    }
};
class Square : public Rectangle
{
public:
    Square(double side) : Rectangle(side, side) {}
};
class Triangle : public Shape
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double getArea()
    {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double getPerimeter()
    {
        return side1 + side2 + side3;
    }
};
class Rhombus : public Shape
{
private:
    double diagonal1, diagonal2;

public:
    Rhombus(double d1, double d2) : diagonal1(d1), diagonal2(d2) {}
    double getArea()
    {
        return (diagonal1 * diagonal2) / 2;
    }
    double getPerimeter()
    {
        return 2 * sqrt(pow(diagonal1 / 2, 2) + pow(diagonal2 / 2, 2));
    }
};
class Trapezoid : public Shape
{
private:
    double base1, base2, height, side1, side2;

public:
    Trapezoid(double b1, double b2, double h, double s1, double s2) : base1(b1), base2(b2), height(h), side1(s1), side2(s2) {}
    double getArea()
    {
        return ((base1 + base2) / 2) * height;
    }
    double getPerimeter()
    {
        return base1 + base2 + side1 + side2;
    }
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double getArea()
    {
        return M_PI * pow(radius, 2);
    }
    double getPerimeter()
    {
        return 2 * M_PI * radius;
    }
};
int main()
{
    Rectangle r(5, 3);
    Square s(4);
    Triangle t(3, 4, 5);
    Rhombus rh(6, 8);
    Trapezoid tr(4, 8, 6, 5, 7);
    Circle c(2.5);
    cout << "Rectangle: Area = " << r.getArea() << ", Perimeter = " << r.getPerimeter() << endl;
    cout << "Square: Area = " << s.getArea() << ", Perimeter = " << s.getPerimeter() << endl;
    cout << "Triangle: Area = " << t.getArea() << ", Perimeter = " << t.getPerimeter() << endl;
    cout << "Rhombus: Area = " << rh.getArea() << ", Perimeter = " << rh.getPerimeter() << endl;
    cout << "Trapezoid: Area = " << tr.getArea() << ", Perimeter = " << tr.getPerimeter() << endl;
    cout << "Circle: Area = " << c.getArea() << ", Circumference = " << c.getPerimeter() << endl;
    return 0;
}