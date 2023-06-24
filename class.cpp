#include <bits/stdc++.h>
using namespace std;
class Calculator
{
    float a, b;

public:
    void result()
    {
        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
    }
    float add()
    {
        return a + b;
    }
    float sub()
    {
        return a - b;
    }
    float mul()
    {
        return a * b;
    }
    float div()
    {
        float a, b;
        cin >> a >> b;
        if (b == 0)
        {
            cout << "Division By Zero" << endl;
            return INFINITY;
        }
        else
        {
            return a / b;
        }
    }
};
int main()
{
    int ch;
    Calculator c;
    cout << "Enter 1 to Add\n"
         << "Enter 2 to Subtract\n"
         << "Enter 3 to Multiply\n"
         << "Enter 4 to Divide\n"
         << "Enter 0 To Exit\n";
    do
    {
        cout << "\nEnter Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            c.result();
            cout << "Result: " << c.add() << endl;
            break;
        case 2:
            c.result();
            cout << "Result: " << c.sub() << endl;
            break;
        case 3:
            c.result();
            cout << "Result: " << c.mul() << endl;
            break;
        case 4:
            c.result();
            cout << "Result: " << c.div() << endl;
            break;
        }
    } while (ch >= 1 && ch <= 4);
    return 0;
}