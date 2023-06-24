#include <bits/stdc++.h>
using namespace std;
class multifunc
{
public:
    int a, b;
    char area;
    char volume;
    
};
class square:public multifunc
{
    public:
    int a;
    void input()
    {
        cout << "enter the value :";
        cin >> a;
    }
    void output()
    {
        cout << "details of square :";
        cout << "area is :a*a";
        cout << "area is :a*a*a";
    }
};
int main()
{
    multifunc mfc[10];
    for (int i = 0; i < 10; i++)
    {
        mfc[i].input();
        mfc[i].output();
    }
}