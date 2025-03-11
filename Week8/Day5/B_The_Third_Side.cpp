/* #include <bits/stdc++.h>
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, sum;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;
            v.pb(number);
        }
        sort(v.begin(), v.end());

        while (v.size() > 1)
        {
            sum = (v[0] + v[1])-1;
            v.erase(v.begin(),v.begin()+2);
            v.pb(sum);
            sort(v.begin(),v.end());
        }
        cout << v[0] << endl;
    }
    return 0;
} */
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> v;
        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;
            v.push(number);
        }
        while (v.size() > 1)
        {
            int a = v.top();
            v.pop();
            int b = v.top();
            v.pop();
            int sum = (a + b) - 1;
            v.push(sum);
        }
        cout << v.top() << endl;
    }

    return 0;
}
