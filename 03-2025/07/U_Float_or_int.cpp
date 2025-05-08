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

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    float n;
    cin >> n;
    int tni = (int)n;
    float taolf = n - tni;
    if(taolf == 0) cout << "int " << tni << endl;
    else cout << "float " << tni << ' ' << fixed << setprecision(3) << taolf << endl;
    return 0;
}
