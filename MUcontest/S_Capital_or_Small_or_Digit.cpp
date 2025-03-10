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
    char x;
    cin >> x;
    if(isdigit(x))
    {
        cout << "IS DIGIT";
    }
    else if(isupper(x))
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }
    else if(islower(x))
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }
    return 0;
}
