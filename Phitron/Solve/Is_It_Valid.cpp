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
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
                st.push(s[i]);
            else if (st.top() == s[i])
                st.push(s[i]);
            else if (st.top() != s[i])
                st.pop();
        }
        if (st.empty())
            YES else NO
    }
    return 0;
}