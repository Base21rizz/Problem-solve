#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = a - b;
    ans = a - b;
    if (ans % 2 != 0)
        cout << "-1" << endl;
    else
    {
        cout << ans / 2 << endl;
    }
}
