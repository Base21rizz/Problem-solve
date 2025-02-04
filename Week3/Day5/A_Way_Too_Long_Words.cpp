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

int tc; cin >> tc;
while (tc--) {
    string wor;
    cin >> wor;
    int length;
    length = wor.length();
    if (length > 10)
    {
        cout << wor[0] << (length-2);
        for (int i = length-1; i < length; i++)
        {
            cout << wor[i] << '\n';
        }
    }
    else
    {
        cout << wor << '\n';
    }
}
return 0;
}