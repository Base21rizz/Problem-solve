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
        int freq[26] = {};
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
            freq[s[i] - 'a']++;
        /* for(auto it: freq) cout << it << " ";
        cout << endl; */
        int count = 0;
        if(abs(n - k) == 1 || n - k == 0) YES
        else{
            for (int i = 0; i < 26; i++){
                if(freq[i] % 2 != 0) count++;}
            if(k >= count-1) YES
            else NO
        }   
    }
    return 0;
}