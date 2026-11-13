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
    int n, m, k;
    cin >> n >> m >> k;
    vi v(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vi da(m + 2), pre(m + 1), val(m + 1), last(n + 2), lastpre(n + 1);
    vector<pair<int, int>> later;
    for (int i = 0; i < m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        val[i + 1] = d;
        later.pb({l, r});
    }

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        da[l]++, da[r + 1]--;
    }
    pre[0] = 0;
    for (int i = 1; i <= m; i++)
        pre[i] = pre[i - 1] + da[i];

    for (int i = 1; i <= m; i++)
        val[i] *= pre[i];
    int j = 1;
    for (auto [x, y] : later)
    {
        last[x] += val[j];
        last[y + 1] -= val[j];
        j++;
    }
    lastpre[0] = 0;
    for (int i = 1; i <= n; i++)
        lastpre[i] = lastpre[i - 1] + last[i];

    for (int i = 1; i <= n; i++)
        v[i] += lastpre[i];
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;
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