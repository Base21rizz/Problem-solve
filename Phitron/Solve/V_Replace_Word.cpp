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

    string space = " ";
    string egypt = "EGYPT";
    int count = 0;
    bool flag = true;
    int n = s.size();

    while ((count = s.find(egypt, count)) != string::npos)
    {
        s.replace(count, 5, space);
        count++;
    }

    cout << s << endl;
    return 0;
}