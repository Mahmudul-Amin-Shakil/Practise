#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#define ll long long
#define PI 3.1415926535897932384626433832795l
int hs[10000001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hs[a[i]]++;
    }
    ll ans = 0;
    /*
    for(int i = 0; i<n; i++) {
        int cnt = 0;
        for(int j = i+1; j<n; j++) {
            if(a[i]==a[j])ans++;
        }
    }
    */
    for (int i = 1; i <= 10000000; i++)
    {
        if (hs[i] > 0)
        {
            ans += ((hs[i] * (hs[i] - 1)) / 2);
        }
    }
    cout << ans << '\n';
    return 0;
}