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
    int l = 0;
    int r = 1000000;
    for (int i = 0; i < 25; i++)
    {
        string inp;
        int mid = l + (r - l) / 2;
        cout << mid << endl;
        cin >> inp;
        if (inp == "Bingo!")
            break;
        else if (inp == "Bigger")
            l = mid + 1;
        else if (inp == "Smaller")
            r = mid - 1;
    }

    return 0;
}