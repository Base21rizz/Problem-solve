#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define pb push_back
typedef vector<int> vi;
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

string s;
vi no;
cin >> s;

for (auto boga:s)
{
    if(boga!='+')
    {
        no.pb(boga-'0');
    }
}
sort(no.begin(),no.end());
for (int i = 0; i < no.size(); i++)
{
    cout << no[i];
    if(i<no.size()-1)
    {
        cout << '+';
    }
}
return 0;
}