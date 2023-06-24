#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
    virtual double area() = 0;
};
class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area()
    {
        return width * height;
    }
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area()
    {
        return M_PI * pow(radius, 2);
    }
};
class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area()
    {
        return 0.5 * base * height;
    }
};
class Square : public Rectangle
{
public:
    Square(double s) : Rectangle(s, s) {}
};
class Ellipse : public Shape
{
private:
    Circle *major, *minor;

public:
    Ellipse(double a, double b)
    {
        major = new Circle(a);
        minor = new Circle(b);
    }
    double area()
    {
        return M_PI * major->area() * minor->area();
    }
    ~Ellipse()
    {
        delete major;
        delete minor;
    }
};
int main()
{
    int shapeType;
    double a, b, c, d;
    cout << "Enter the type of shape: 1 - Rectangle, 2 - Circle, 3 - Triangle, 4 - Square, 5 - Ellipse" << endl;
    cin >> shapeType;
    switch (shapeType)
    {
    case 1:
        cout << "Enter width and height of rectangle: ";
        cin >> a >> b;
        Rectangle *r = new Rectangle(a, b);
        cout << "Area of rectangle is " << r->area() << endl;
        delete r;
        break;
    case 2:
        cout << "Enter radius of circle: ";
        cin >> a;
        Circle *c = new Circle(a);
        cout << "Area of circle is " << c->area() << endl;
        delete c;
        break;
    case 3:
        cout << "Enter base and height of triangle: ";
        cin >> a >> b;
        Triangle *t = new Triangle(a, b);
        cout << "Area of triangle is " << t->area() << endl;
        delete t;
        break;
    case 4:
        cout << "Enter side of square: ";
        cin >> a;
        Square *s = new Square(a);
        cout << "Area of square is " << s->area() << endl;
        delete s;
        break;
    case 5:
        cout << "Enter major and minor axis of ellipse: ";
        cin >> a >> b;
        Ellipse *e = new Ellipse(a, b);
        cout << "Area of ellipse is " << e->area() << endl;
        delete e;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }
    return 0;
}