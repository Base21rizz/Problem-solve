#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int yl, yb, years;
    cin >> yl >> yb;
    years = 0;
    while (yl < yb + 1)
    {
        yl *= 3;
        yb *= 2;
        years++;
    }
    printf("%d", years);
    return 0;
}