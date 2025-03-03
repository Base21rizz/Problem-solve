#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    string s;
    cin >> s;
    int count = 0;
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if(((int)s[i] >= 65 && (int)s[i] <= 90))
        {
            count++;
        }
    }
    if (count >= 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
