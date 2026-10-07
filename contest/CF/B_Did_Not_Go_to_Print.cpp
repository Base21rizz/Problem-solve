/*
===============================================================================

██████╗  █████╗ ███████╗███████╗██████╗  ██╗██████╗ ██╗███████╗███████╗
██╔══██╗██╔══██╗██╔════╝██╔════╝╚════██╗███║██╔══██╗██║╚══███╔╝╚══███╔╝
██████╔╝███████║███████╗█████╗   █████╔╝╚██║██████╔╝██║  ███╔╝   ███╔╝
██╔══██╗██╔══██║╚════██║██╔══╝  ██╔═══╝  ██║██╔══██╗██║ ███╔╝   ███╔╝
██████╔╝██║  ██║███████║███████╗███████╗ ██║██║  ██║██║███████╗███████╗
╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚══════╝

===============================================================================
*/
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define vi vector<int>
#define si set<int>
#define msi multiset<int>
#define all(v) (v).begin(), (v).end()
#define pb push_back
using namespace std;

signed main()
{
    fast_IO;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        set<int> stt;
        for (int i = 1; i <= n; i++)
            stt.insert(i);
        string s;
        cin >> s;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                st.push(i + 1);
            else if (s[i] == '2')
            {
                if (!st.empty())
                {
                    int it = st.top();
                    stt.erase(it);
                    st.pop();
                }
                else
                {
                    stt.erase(i + 1);
                }
            }
            else
            {
                if (!stt.empty())
                    stt.erase(i + 1);
            }
        }
        cout << stt.size() << endl;
        for (auto it : stt)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}