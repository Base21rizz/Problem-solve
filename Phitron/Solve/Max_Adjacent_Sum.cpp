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
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;
    int evenMax = 0;
    int oddMax = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i % 2 == 0)
        {
            even.push_back(x);
            evenMax = max(evenMax, x);
        }
        else
        {
            odd.push_back(x);
            oddMax = max(oddMax, x);
        }
    }
    cout << evenMax + oddMax << endl;

    return 0;
}