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
    int s,n;
    bool flag;
    cin >> s >> n;
    vector<pair<int,int>> dragon_bonus(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dragon_bonus[i].first >>  dragon_bonus[i].second;
    }
    sort(dragon_bonus.begin(),dragon_bonus.end());
    for (int i = 0; i < n; i++)
    {
        int x = dragon_bonus[i].first;
        int b = dragon_bonus[i].second;
        if(s>x)
        {
            s += b;
        }
        else
        {
            NO
            return 0;
        }
    }
    YES
    return 0;
}
