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
    if(isupper(x))
    {
        x = tolower(x);
        cout << x << endl;
    }
    else if(islower(x))
    {
        x = toupper(x);
        cout << x << endl;
    }  
    return 0;
}
