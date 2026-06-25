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
    int countBig = 0, countSmall = 0;
    for (auto c : s)
    {
        if (c >= 65 && c <= 90)
            countBig++;
        else if (c >= 97 && c <= 122)
            countSmall++;
    }
    if (countBig > countSmall)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;

    return 0;
}