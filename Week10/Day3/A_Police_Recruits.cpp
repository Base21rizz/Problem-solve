#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    int police = 0;                                     
    int crime = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x > 0)
        {
            police += x;
        }
        else
        {
            if(police<1)
            {
                crime++;
            }
            else
            {
                --police;
            }
        }
    }
    cout << crime;                                     
    return 0;
}
