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
    ios::sync_with_stdio(false); cin.tie(NULL);
    int l,r;
    cin >> l >> r;
    for (int i = 1; i <= l; i++)
    {
        if(i % 2 != 0)
        {
            for (int j = 0; j < r; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else if(i % 4 == 0)
        {
            cout << "#";
            for (int j = 1; j < r; j++)
            {
                cout << ".";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < r-1; j++)
            {
                cout << ".";
            }
            cout << "#" << endl;
        }
    }    
    return 0;
}
