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
    string s;
    string ss;
    string t;
    map<char,int>map_s,map_t;
    getline(cin,s);
    getline(cin,ss);
    getline(cin,t);
    for(char c:s) map_s[c]++;
    for(char c:ss) map_s[c]++;
    for(char c:t) map_t[c]++;
    if(map_s == map_t)
    {
        YES
    }
    else
    {
        NO
    }
    return 0;
}
