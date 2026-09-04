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
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(i == 0){
                ans += abs(arr[i]);
            }
            else if(arr[i] < 0 && arr[i-1] < 0){
                // same sign
                ans += abs(arr[i]);
            } 
            else if(arr[i] > 0 && arr[i-1] > 0){
                // same sign
                ans += abs(arr[i]);
            }
            else{
                // different sign
                int prevop = abs(arr[i-1]);
                int currop = abs(arr[i]);
                if(prevop < currop)
                    ans += abs(prevop - currop);
            }
        }
        cout << ans << endl;
    }
    return 0;
}