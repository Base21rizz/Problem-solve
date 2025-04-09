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
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool continuous_3_empty_cells = false;
        int total_empty_cells = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.')
            {
                continuous_3_empty_cells = true;
                break;
            }
            if(s[i] == '.')
            {
                total_empty_cells++;
            }
        }
        if(continuous_3_empty_cells)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << total_empty_cells << endl;
        }
        

    }
    
    return 0;
}
