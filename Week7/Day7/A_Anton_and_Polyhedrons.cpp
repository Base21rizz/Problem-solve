#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    int count = 0;
    while (tc--) 
    {
        string inp;
        cin >> inp;
        if (inp == "Tetrahedron")
        {
            count += 4;
        }
        else if (inp == "Cube")
        {
            count += 6;
        }
        if (inp == "Octahedron")
        {
            count += 8;
        }
        if (inp == "Dodecahedron")
        {
            count += 12;
        }
        if (inp == "Icosahedron")
        {
            count += 20;
        }
    }
    cout << count;
    return 0;
}       