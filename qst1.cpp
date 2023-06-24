#include <bits/stdc++.h>
using namespace std;
int main()
{
    int f;
    cin >> f;
    map<int, int> m;
    for (int i = 0; i < f - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        m[x]++;
        m[y]++;
    }
    bool cnt = false;
    for (auto i : m)
    {
        if (i.second == f - 1)
        {
            cout << i.first << endl;
            cnt = true;
            break;
        }
    }
    if (!cnt)
    {
        cout << "no star available !!" << endl;
    }
    return 0;
}