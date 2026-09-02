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
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, l;
    cin >> n >> l;
    int v[n];
    for(int i=0;i<n;i++) cin >> v[i];
    int maxgap = -1;
    sort(v, v+n);
    for (int i = 0; i < n; i++)
    {
        if(v[i+1] - v[i] > maxgap && i+1 < n) 
            maxgap = v[i+1] - v[i];
    }
    double maxgap2 = maxgap / 2.0;
    double max2 = max((v[0]- 0), (l - v[n-1]));
    cout << fixed << setprecision(10) << max(maxgap2, max2) << endl;
    return 0;
}
