/*
===============================================================================

██████╗  █████╗ ███████╗███████╗██████╗  ██╗██████╗ ██╗███████╗███████╗
██╔══██╗██╔══██╗██╔════╝██╔════╝╚════██╗███║██╔══██╗██║╚══███╔╝╚══███╔╝
██████╔╝███████║███████╗█████╗   █████╔╝╚██║██████╔╝██║  ███╔╝   ███╔╝
██╔══██╗██╔══██║╚════██║██╔══╝  ██╔═══╝  ██║██╔══██╗██║ ███╔╝   ███╔╝
██████╔╝██║  ██║███████║███████╗███████╗ ██║██║  ██║██║███████╗███████╗
╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚══════╝

===============================================================================
*/
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define vi vector<int>
#define si set<int>
#define msi multiset<int>
#define all(v) (v).begin(), (v).end()
#define pb push_back
using namespace std;
const int MOD = 1e9 + 7;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int power_bi(int a, int b)
{
    int ans = 1 % MOD;
    while (b)
    {
        if (b & 1)
            ans = (1LL * ans % MOD * a % MOD) % MOD;
        a = 1LL * a * a % MOD;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    int n,q;
    cin >> n >> q;
    vi v(n);
    multiset<int, greater<int>>st;
    for (int i = 0; i < n; i++){
        cin >> v[i]; 
        st.insert(v[i]);
    }
    vi da(n+2);
    for (int i = 0; i < q; i++)
    {
        int l,r;cin >> l >> r;
        da[l]++;
        da[r+1]--;
    }
    vi pre(n+1);
    multiset<int, greater<int>> prest;
    pre[0] = 0;
    for (int i = 1; i < n+1; i++){
        pre[i] = pre[i-1] + da[i];
        prest.insert(pre[i]);
    }
    int ans = 0;
    for(auto it : prest){
        int curr = *st.begin();
        ans += (curr * it);
        auto x = st.begin();
        st.erase(x);
    }
    cout << ans << endl;
}

signed main()
{
    fast_IO;
    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();
    return 0;
}