#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        string s,s1,s2;
        cin >> s;
        if(s.size() % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            s1 = s.substr(0,s.size()/2);
            s2 = s.substr(s.size()/2,s.size()/2);
            if(s1 == s2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}