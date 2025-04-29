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
    int a, b, c;
    cin >> a >> b >> c;
    int sorted[3] = {a, b, c};
    sort(sorted, sorted + 3);
    for (int i = 0; i < 3; i++)
    {
        cout << sorted[i] << endl;
    }
    cout << endl;
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}
