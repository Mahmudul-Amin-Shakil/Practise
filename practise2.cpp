#include <bits/stdc++.h>
using namespace std;
class Calculator
{
public:
    double Add(double a, double b)
    {
        return a + b;
    }
    double Subtract(double a, double b)
    {
        return a - b;
    }
    double Multiply(double a, double b)
    {
        return a * b;
    }
    double Divide(double a, double b)
    {
        if (b == 0)
        {
            cout << "Error: Divide by zero" << endl;
            return 0;
        }
        return a / b;
    }
    long long Modulo(long long a, long long b)
    {
        if (b == 0)
        {
            cout << "Error: Divide by zero" << endl;
            return 0;
        }
        return a % b;
    }
    double Power(double a, double b)
    {
        return pow(a, b);
    }
    double SquareRoot(double a)
    {
        return sqrt(a);
    }
    double Square(double a)
    {
        return pow(a, 2);
    }
    double log(double a)
    {
        return log10(a);
    }
};
class Trigonometry
{
public:
    double sin (double a)
    {
        double ans=sin(a);
        return ans;
    }
    double cos (double a)
    {
        double ans=cos(a);
        return ans;
    }
    double tan (double a)
    {
        double ans=tan(a);
        return ans;
    }
};
class child :public Calculator, public Trigonometry
{

};
int main()
{
    Calculator calc;
    int choice;
    cout << "#################### Project Name:CALCULATOR ###################" << endl;
    cout << "#################  WELCOME TO MY CALCULATOR  ################ \n"
         << endl;
    cout << "Choose One Option: " << endl;
    cout << "1: Addition ->" << endl;
    cout << "2: Subtract ->" << endl;
    cout << "3: Multiply ->" << endl;
    cout << "4: Divide ->" << endl;
    cout << "5: Modulo ->" << endl;
    cout << "6: Power ->" << endl;
    cout << "7: Square root ->" << endl;
    cout << "8: Square ->" << endl;
    cout << "9: log ->" << endl;
    cout << "10: sin ->" << endl;
    cout << "11: cos ->" << endl;
    cout << "12: tan ->" << endl;
    cout << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        double a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << a << " + " << b << " = " << calc.Add(a, b) << endl;
        break;
    case 2:
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << a << " - " << b << " = " << calc.Subtract(a, b) << endl;
        break;
    case 3:
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << a << " * " << b << " = " << calc.Multiply(a, b) << endl;
        break;
    case 4:
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << a << " / " << b << " = " << calc.Divide(a, b) << endl;
        break;
    case 5:
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << a << " % " << b << " = " << calc.Modulo(a, b) << endl;
        break;
    case 6:
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << a << " ^ " << b << " = " << calc.Power(a, b) << endl;
        break;
    case 7:
        cout << "Enter number: ";
        cin >> a;
        cout << "Square root of " << a << " = " << calc.SquareRoot(a) << endl;
        break;
    case 8:
        cout << "Enter number: ";
        cin >> a;
        cout << "Square of " << a << " = " << calc.Square(a) << endl;
        break;
    case 9:
        cout << "Enter number: ";
        cin >> a;
        cout << "log of " << a << " = " << calc.log(a) << endl;
        break;
    case 10:
        cout << "Enter number: ";
        cin >> a;
        cout << "sin of " << a << " = " << calc.sin(a) << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}