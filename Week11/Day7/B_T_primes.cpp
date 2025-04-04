#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

bool isprime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i <=n ; i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        bool flag;
        int n;
        cin >> n;
        int  rt= sqrt(n);
        if(rt*rt == n && isprime(rt))
        {
            YES
        }
        else
        {
            NO
        }
    }
    return 0;
}