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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        map<int,int> frequency;
        for (int i = 0; i < n; i++)
        {
            frequency[a[i]]++;
        }
        if(frequency.size()>=3)
        {
            No
        }     
        else
        {
            int freq_1 = frequency.begin()->second;
            int freq_2 = frequency.rbegin()->second;
            if(freq_1 == freq_2) Yes
            else if(n%2 ==1 && abs(freq_1 - freq_2) == 1) Yes
            else No
        }   
    }
    return 0;
}
