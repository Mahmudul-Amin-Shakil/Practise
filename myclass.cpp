#include <bits\stdc++.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};
int main()
{
    student amin, shakil;
    amin.id = 200;
    amin.gpa = 3.44;
    cout << amin.id << " " << amin.gpa << endl;
    shakil.id = 106;
    shakil.gpa = 3.55;
    cout << shakil.id << " " << shakil.gpa << endl;
}