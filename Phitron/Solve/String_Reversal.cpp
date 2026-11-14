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
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
// less<T> means set less_equal<T> means multiset
using pbds = tree<T, null_type, less<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(all(r));
    map<char, vector<int>> pos_s, pos_r;
    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].pb(i);
        pos_r[r[i]].pb(i);
    }

    vector<int> perm(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
            perm[pos_r[ch][i]] = pos_s[ch][i];
    }

    pbds<int> p;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = perm[i];
        ans += p.size() - p.order_of_key(x);
        p.insert(x);
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