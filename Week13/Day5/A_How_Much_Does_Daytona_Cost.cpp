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
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++; 
        }
        int k_cnt = freq[k];
        int max_freq = 0;
        for(map<int, int>::iterator it = freq.begin(); it != freq.end(); ++it)
        {
            if(it->second > max_freq)
            {
                max_freq = it->second;
            }
        }
        if(k_cnt > 0/*  && k_cnt == max_freq */) YES
        else NO
    }
    return 0;
}
