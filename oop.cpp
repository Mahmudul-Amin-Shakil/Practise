#include <bits/stdc++.h>
using namespace std;
#define PI 3.1416
class GeometricShape
{
public:
    double length, width, hight, redious;
    void area()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Area = " << length * width << endl;
    }
};
class quadrilateral : public GeometricShape
{
public:
    double length2, width2;
    void square()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Area = " << length * length << endl;
    }
    void perimeter()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Enter Length2: ";
        cin >> length2;
        cout << "Enter Width2: ";
        cin >> width2;
        cout << "Perameter = " << (length + width + length2 + width2) << endl;
    }
};
class Rectangle : public quadrilateral
{
public:
    void area()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Area = " << length * width << endl;
    }
    void perimeter()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "perimete = " << 2 * (length + width) << endl;
    }
};
class square : public quadrilateral
{
public:
    void area()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Area = " << length * length << endl;
    }
    void perimeter()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "perimete = " << 4 * (length) << endl;
    }
};
class Tropozoid : public quadrilateral
{
public:
    void area()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Length2: ";
        cin >> length2;
        cout << "Enter hight: ";
        cin >> hight;
        cout << "Area = " << 0.5 * hight * (length + length2) << endl;
    }
    // void perimeter()
    // {
    //     cout << "Enter Length: ";
    //     cin >> length;
    //     cout << "Enter Width: ";
    //     cin >> width;
    //     cout << "perimete = " << 2 * (length + width) << endl;
    // }
};
class Parallelogram : public quadrilateral
{
public:
    void area()
    {
        cout << "Enter base: ";
        cin >> length;
        cout << "Enter hight: ";
        cin >> hight;
        cout << "Area = " << length * hight << endl;
    }
    void perimeter()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "perimete = " << 2 * (length + width) << endl;
    }
};
class circle : public GeometricShape
{
public:
    void area()
    {
        cout << "Enter Redious: ";
        cin >> redious;
        cout << "Area = " << PI * redious * redious << endl;
    }
    void perimeter()
    {
        cout << "Enter Redious: ";
        cin >> redious;
        cout << "perimeter = " << PI * redious * 2 << endl;
    }
};
class sphere : public GeometricShape
{
public:
    void surfaceArea()
    {
        cout << "Enter Redious: ";
        cin >> redious;
        cout << "Surface Area = " << PI * redious * redious * 4 << endl;
    }
    void vollume()
    {
        cout << "Enter Redious: ";
        cin >> redious;
        cout << "Surface Area = " << PI * (4.00 / 3.00) * redious * redious * redious << endl;
    }
};
class Triangle : public GeometricShape
{
public:
    void area()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Enter hight: ";
        cin >> hight;
        double s = (length + width + hight) / 2;
        double areaa = sqrt(s * (s - length) * (s - width) * (s - hight));
        cout << "Area = " << areaa << endl;
    }
    void perimeter()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Enter hight: ";
        cin >> hight;
        double s = (length + width + hight);
        cout << "perimete = " << s << endl;
    }
};
int main()
{
    bool p = 1;
    while (p)
    {
        long long a, b, c, op;
        double x, y, z;
        cout << "Select Operation:  \n";
        cout << "[1] quadrilateral.\n";
        cout << "[2] Circle.\n";
        cout << "[3] Triangle.\n";
        cout << "[4] Sphere.\n";
        cout << "Or press Any other Key to Exit\n";
        cin >> op;
        if (op == 1)
        {
            cout << "Select Operation:  \n";
            cout << "[1] Rectangle.\n";
            cout << "[2] Square.\n";
            cout << "[3] Tropozoid.\n";
            cout << "[4] Parallelogram.\n";

            int slct;
            cin >> slct;
            if (slct == 1)
            {
                Rectangle rc = Rectangle();
                cout << "Select Operation:  \n";
                cout << "[1] Area.\n";
                cout << "[2] Perimeter.\n";
                int opp;
                cin >> opp;
                if (opp == 1)
                    rc.area();
                else
                    rc.perimeter();
            }
            else if (slct == 2)
            {
                square sq = square();
                cout << "Select Operation:  \n";
                cout << "[1] Area.\n";
                cout << "[2] Perimeter.\n";
                int opp;
                cin >> opp;
                if (opp == 1)
                    sq.area();
                else
                    sq.perimeter();
            }
            else if (slct == 3)
            {
                Tropozoid tz = Tropozoid();
                cout << "Select Operation:  \n";
                cout << "[1] Area.\n";
                cout << "[2] Perimeter.\n";
                int opp;
                cin >> opp;
                if (opp == 1)
                    tz.area();
                else
                    tz.perimeter();
            }
            else if (slct == 4)
            {
                Parallelogram par = Parallelogram();
                cout << "Select Operation:  \n";
                cout << "[1] Area.\n";
                cout << "[2] Perimeter.\n";
                int opp;
                cin >> opp;
                if (opp == 1)
                    par.area();
                else
                    par.perimeter();
            }
        }
        else if (op == 2)
        {
            circle cr = circle();
            cout << "Select Operation:  \n";
            cout << "[1] Area.\n";
            cout << "[2] Perimeter.\n";
            int opp;
            cin >> opp;
            if (opp == 1)
                cr.area();
            else
                cr.perimeter();
        }
        else if (op == 3)
        {
            Triangle tt = Triangle();
            cout << "Select Operation:  \n";
            cout << "[1] Area.\n";
            cout << "[2] Perimeter.\n";
            int opp;
            cin >> opp;
            if (opp == 1)
                tt.area();
            else
                tt.perimeter();
        }
        else if (op == 4)
        {
            sphere sp = sphere();
            cout << "Select Operation:  \n";
            cout << "[1] Surfice Area.\n";
            cout << "[2] Vollume.\n";
            int opp;
            cin >> opp;
            if (opp == 1)
                sp.area();
            else
                sp.vollume();
        }
        else
        {
            cout << "OOPS!! Invalid Input. Good Bye\n";
            p = 0;
        }
    }
    return 0;
}