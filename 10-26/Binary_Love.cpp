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

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (s[i] == '1' && s[i + 1] == '0')
                mp["10"]++;
            else if (s[i] == '0' && s[i + 1] == '1')
                mp["01"]++;
        }
    }
    if (mp.size() == 1 || mp.size() == 0)
        cout << "Bob" << endl;
    else if (mp["01"] == mp["10"])
        cout << "Alice" << endl;
    else
    {
        if (mp["01"] > mp["10"])
        {
            if (s[0] == '0' || s[n - 1] == '1')
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
        else if (mp["10"] > mp["01"])
        {
            if (s[0] == '1' || s[n - 1] == '0')
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
    }
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