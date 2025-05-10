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
    int a,b;
    bool flag = false;
    char c;
    cin >> a >> c >> b;
    if(c == '<')
    {
        if(a<b) cout << "Right" << endl;
        else cout << "Wrong" << endl;
    }
    else if(c == '=')
    {
        if(a==b) cout << "Right" << endl;
        else cout << "Wrong" << endl;
    }
    else if(c == '>')
    {
        if(a>b) cout << "Right" << endl;
        else cout << "Wrong" << endl;
    }
    return 0;
}
