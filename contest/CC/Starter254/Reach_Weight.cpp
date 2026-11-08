#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ans = ((n - n % 2) / 2 * 30) + (n % 2) * 20;
        cout << ans << endl;
    }
}
