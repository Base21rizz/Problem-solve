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
const int MOD = 998244353;

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

int pow2(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= 2, ans %= MOD;
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    vi cnt(n + 5);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
    }
    int ans = 0;
    for (int mex = 0; mex < n + 1; mex++)
    {
        int ways = 1;
        for (int j = 0; j < mex; j++)
        {
            if (cnt[j] == 0)
            {
                // not possible
                ways = 0;
                break;
            }
            else
            {
                // possible
                int nije = pow2(cnt[j]) - 1;
                nije += MOD;
                nije %= MOD;
                ways *= nije;
                ways %= MOD;
            }
        }
        if (ways == 0)
            continue;
        int extra = pow2(cnt[mex + 1]);
        if (mex == 0)
            extra--;
        ways *= extra;
        ways %= MOD;
        ans += ways;
        ans %= MOD;
    }
    cout << ans << endl;
}

signed main()
{
    fast_IO;
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}