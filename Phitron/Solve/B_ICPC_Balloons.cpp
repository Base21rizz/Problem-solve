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
        string based = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n;
        int count = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (s[i] == based[j])
                {
                    count++;
                    based.erase(j, 1);
                }
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}