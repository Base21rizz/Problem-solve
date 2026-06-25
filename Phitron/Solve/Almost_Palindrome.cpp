#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;
bool is_palindrome(string s)
{
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            return 0;
    }
    return 1;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int count = 0;
        string s;
        string m = " ";
        cin >> s;
        if (!is_palindrome(s))
        {
            for (int i = 0; i < s.size(); i++)
            {
                bool flag = false;
                for (int j = 0; j < m.size(); j++)
                {
                    if (s[i] == m[j])
                    {
                        flag = true;
                        break;
                    }
                }
                if (!flag)
                {
                    m += s[i];
                    count++;
                }
            }
            cout << count - 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}