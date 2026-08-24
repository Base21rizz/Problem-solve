#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    int arr[n + 1] = {};
    int con[3] = {0, 1, 2};
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    while (q--)
    {
        int l, r;
        int mex = 0;
        cin >> l >> r;
        int length = r - l;
        bool found[length] = {};
        for (int i = l; i <= r; i++)
        {
            if (arr[i] == '0')
            {
                cout << '0' << endl;
                break;
            }
            else if (arr[i] == '1')
            {
                cout << '1' << endl;
                break;
            }
            else if (arr[i] == '2')
            {
                cout << '2' << endl;
                break;
            }
        }
    }

    return 0;
}
