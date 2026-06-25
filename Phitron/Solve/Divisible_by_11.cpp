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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int noLoop = 1;
    int oddDS = 0, evenDS = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (noLoop % 2 == 0)
        {
            oddDS += (s[i] - '0');
        }
        else
        {
            evenDS += (s[i] - '0');
        }
        noLoop++;
    }
    if ((abs(oddDS - evenDS) % 11) == 0)
        YES else NO return 0;
}