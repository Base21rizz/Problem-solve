#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,room = 0; cin >> n;
    while (n--) 
    {
        int p,q,s;
        cin >> p >> q;
        s = q-p;
        if(s >= 2)
        {
            room++;
        }
    }
    cout << room;
    return 0;
}