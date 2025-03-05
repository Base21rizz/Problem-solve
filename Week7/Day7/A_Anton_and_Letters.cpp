#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    string a;
    int count = 0;
    getline (cin,a);
    set<char>inp;
    a = a.substr(1,a.size()-2);
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != ',' && a[i] != ' ')
        {
            inp.insert(a[i]);
        }
    }
    count = inp.size();
    cout << count;
    return 0;
}