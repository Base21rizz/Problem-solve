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
    int n;
    cin >> n;
    int starting = 1;
    int ending = n;
    int count = 1;
    while (n--)
    {
        if (count % 2 != 0)
        {
            cout << starting << " ";
            starting++;
        }
        else
        {
            cout << ending << " ";
            ending--;
        }
        count++;
    }

    return 0;
}