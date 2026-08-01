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
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    if (n != m)
        cout << "NO" << endl;
    else
    {
        while (n--)
        {
            if (st.top() != q.front())
            {
                cout << "NO" << endl;
                return 0;
            }
            else
            {
                st.pop();
                q.pop();
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}