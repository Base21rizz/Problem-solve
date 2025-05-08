#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
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
    int tc; cin >> tc;
    while (tc--) 
    {
        string s;
        cin >> s;
        bool flag = true;
        int one=0,zero=0,more;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        int s_len = s.length();
        int t_len = 0;
        for (int i = 0; i < s_len; i++)
        {
            if(s[i] == '0' && one > 0)
            {
                one--;
                t_len++;
            }
            else if(s[i] == '1' && zero > 0)
            {
                zero--;
                t_len++;
            }
            else break;
        }
        cout << s_len-t_len << endl;
    }
    
    return 0;
}
