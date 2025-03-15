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
    int n;
    cin >> n;
    if(n <= 1)
    {
        NO
        return 0;
    }
    if(n == 2) 
    {
        YES
        return 0;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            NO
            return 0;
        }
    }
    YES
    return 0;
}
