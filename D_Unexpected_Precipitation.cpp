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
    vi a(n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    vi b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }
    if (sum1 == sum2)
    {
        cout << "Draw" << endl;
        return;
    }
    int s1 = 0, s2 = 0;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
        {
            if (flag)
                s1 += a[i], s2 += b[i];
            else
                s2 += a[i], s1 += b[i];
        }
        else
            flag = !flag;
    }
    if (s1 > s2)
        cout << "Sunny" << endl;
    else if (s1 == s2)
        cout << "Draw" << endl;
    else
        cout << "Aubrey" << endl;
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