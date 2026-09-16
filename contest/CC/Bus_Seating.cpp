#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        if (n > k)
            cout << 0 << endl;
        else
            cout << (k - n) * 2 << endl;
    }
}
