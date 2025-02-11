#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--) 
    {
        string s;
        cin >> s;
        s[s.length()-1] = ' ';
        s[s.length()-2] = 'i';
        cout << s << '\n';
    }
    return 0;
}