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
    string s;
    cin >> s;

    bool ucs = all_of(s.begin(),s.end(), ::isupper);
    bool us = islower(s[0]) && all_of(s.begin()+1,s.end(), ::isupper);

    if(ucs)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if(us)
    {
        s[0] = toupper(s[0]);
        transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
    }
    cout << s << endl;
    return 0;
}
