#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc,maxi,mini; cin >> tc;
    vector<int>v;
    bool maxfound = false;
    for (int  i = 0; i < tc; i++)
    {
        int number;
        cin >> number;
        v.pb(number);
    }
    int maxnumber = *max_element(v.begin(),v.end());
    int minnumber = *min_element(v.begin(),v.end());
    for (int i = 0; i < tc; i++)
    {
        if(v[i] == maxnumber && !maxfound)
        {
            maxi = i;
            maxfound = true;
        }
        if(v[i] == minnumber)
        {
            mini = i;
        }
    }
    if (maxi>mini)
    {
        cout << (maxi-1)+((tc-1)-mini);
    }
    else
    {
        cout << (maxi-1)+(tc-mini);
    }
    return 0;
}