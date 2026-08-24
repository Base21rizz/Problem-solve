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
    sort(s.begin(), s.end());
    int temp = 97;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((int)s[i] == temp)
            temp++;
    }
    if (temp > 122)
    {
        cout << "None";
        return 0;
    }
    else
        cout << (char)temp << endl;
    return 0;
}
