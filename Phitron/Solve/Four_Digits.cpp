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
    string n;
    cin >> n;
    if (4 - n.size() == 0)
    {
        cout << n << endl;
        return 0;
    }
    for (int i = 0; i < 4 - n.size(); i++)
        cout << "0";
    cout << n << endl;

    return 0;
}