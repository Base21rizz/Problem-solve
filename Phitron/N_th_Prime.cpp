#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;
const int N = 5e5 + 1000;
bool f[N];
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x;
    cin >> x;
    vi primes;
    f[1] = true;
    for (int i = 2; i < N; i++)
    {
        if(!f[i]){
            primes.pb(i);
            for (int j = i*i; j < N;j+=i)
            {
                f[j] = true;
            }
        }
    }
    cout << primes[x-1] << endl;
    return 0;
}
