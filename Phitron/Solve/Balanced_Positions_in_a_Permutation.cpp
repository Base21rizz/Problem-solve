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
        list<int> li;
        int temp = n;
        while (temp--)
        {
            int num;
            cin >> num;
            li.push_back(num);
        }
        int count = 0;
        int i = 0;
        for (auto it : li)
        {
            /* if (it-- < it && it < it++)
                count++; */
            cout << *next(li.begin(), i - 1) << " " << it << " " << *next(it) << " ";
            i++;
        }
        cout << endl;
        /* cout << count << endl; */
    }
    return 0;
}