#include <bits/stdc++.h>
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
    int s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                int jug = i + j + k;
                int gun = i * j * k;
                if (jug <= s && gun <= t && !(k < 0))
                {
                    /* cout << " i=" << i << " j=" << j << " k=" << k;
                    cout << endl; */
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}