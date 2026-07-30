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
    // Always check whether the queue is empty before performing front(), pop(), back()

    queue<int> q;
    // q.push(10);
    // q.pop();
    // q.back();
    // q.front();
    // q.size();
    // q.empty();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}