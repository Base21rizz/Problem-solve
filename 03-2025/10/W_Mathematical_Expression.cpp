#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
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
    int a,b,c;
    char x,y;
    cin >> a >> x >> b >> y >> c;
    if(x == '+')
    {
        if(a+b == c) Yes
        else cout << a+b << endl;
    }
    else if(x == '-')
    {
        if(a-b == c) Yes
        else cout << a-b << endl;
    }
    else if(x == '*')
    {
        if(a*b == c) Yes
        else cout << a*b << endl;
    }
    return 0;
}
