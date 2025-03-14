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
    int tc; cin >> tc;
    while (tc--) 
    {
        int n;
        cin >> n;
        int arr[6];
        int total=0,m=1;
        for (int i = 1; i < 6; i++)
        {
            arr[i] = n%10;
            n = n/10;
            if(arr[i] != 0) total++;
        }
        cout << total << endl;
        for (int i = 1; i < 6; i++)
        {
            if(arr[i] != 0)
            {
                cout << arr[i]*m << " ";
            }
            m = m*10;
        }
        cout << endl;
    }
    
    return 0;
}
