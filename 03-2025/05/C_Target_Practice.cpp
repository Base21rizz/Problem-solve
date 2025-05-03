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
const int score[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1},
};
signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) 
    {
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++)
            {
                a[i][j] = s[j];
            }
        }
        int total_score = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if(a[i][j] == 'X') 
                {
                    total_score += score[i][j];
                }
            }
        }
        cout << total_score << endl;
    }
    return 0;
}
