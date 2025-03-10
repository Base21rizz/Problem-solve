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
    if(48 <= (int)x &&  (int)x <= 57)
    {
        cout << "IS DIGIT";
    }
    else if(65 <= (int)x &&  (int)x <= 90)
    {
        cout << "ALPHA \n";
        cout << "IS CAPITAL";
    }
    else if('a' <= x && x <= 'z')
    {
        cout << "ALPHA \n";
        cout << "IS SMALL";
    }
    return 0;
}
