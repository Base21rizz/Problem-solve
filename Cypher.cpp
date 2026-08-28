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
        int dial[n];
        for (int i = 0; i < n; i++)
        {
            cin >> dial[i];
        }
        for (int i = 0; i < n; i++)
        {
            int noOfMoves;
            cin >> noOfMoves;
            string s;
            cin >> s;
            for (int j = 0; j < noOfMoves; j++)
            {
                if(s[j] == 'D'){
                    dial[i]++;
                    dial[i] %= 10;
                    if(dial[i] == -1) dial[i] = 9;
                }
                else if(s[j] == 'U'){
                    dial[i]--;
                    dial[i] %= 10;
                    if(dial[i] == -1) dial[i] = 9;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << dial[i] << " ";
        }
        cout << endl;
        
        
    }
    return 0;
}