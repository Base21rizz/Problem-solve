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
        int count = 0, loop = 0;
        if (k > n)
            cout << n << endl;
        else
        {
            while (count != n)
            {
                loop++;
                if (loop % k != 0)
                {
                    count++;
                }
            }
            cout << loop << endl;
        }
    }
}
