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
    int n, k, score;
    score = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[k - 1] == 0)
        {
            if (arr[i] > 0)
            {
                score++;
            }
        }
        else if (arr[k - 1] != 0)
        {
            if (arr[i] >= arr[k - 1])
            {
                score++;
            }
            else if (arr[i] < arr[k - 1])
            {
                break;
            }
        }
    }
    cout << score;
    return 0;

    return 0;
}