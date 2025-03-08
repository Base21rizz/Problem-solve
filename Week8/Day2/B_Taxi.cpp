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
    int n;cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        v.pb(number);
    }
    int g1=0,g2=0,g3=0,g4=0,count = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] == 1)
        {
            g1++;
        }
        else if(v[i] == 2)
        {
            g2++;
        }
        else if(v[i] == 3)
        {
            g3++;
        }
        else if(v[i] == 4)
        {
            g4++;
        }
    }
    count += g4;
    count += g3;
    g1 = g1-g3;
    if(g1 < 0)
    {
        g1 = 0;
    }
    if(g2 % 2 == 0)
    {
        g2 = g2/2;
        count += g2;
    }
    else
    {
        g2 = g2/2+1;
        count += g2;
        g1 = g1-2;
        if(g1<0)
        {
            g1 = 0;
        }
    }
    g1 = ((g1+4)-1)/4;
    count += g1;
    cout << count;
    return 0;
}
