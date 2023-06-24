#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, temp, sum = 0;
    cout << "enter the number to sum :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cout << "summation is :" << sum;
}