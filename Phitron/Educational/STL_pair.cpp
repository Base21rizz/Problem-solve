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
    pair<int, int> p; // can be changed two any two variable and can be distinct
    // p = {2, 3};
    // cout << p.first << endl;
    // cout << p.second << endl;
    int n;
    cin >> n;
    vector<pair<int, int>> v(n); // a vector of pairs with a size of n
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    for (auto it : v)
        cout << it.first << " " << it.second << endl;

    return 0;
}