#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        if (k <= n && n <= 2 * k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}