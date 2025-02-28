#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,total = 0,max = 0; cin >> n;
    while (n--) 
    {
        int a,b;
        cin >> a >> b;
        total += (b-a);
        if(total > max)
        {
            max = total;
        }
    }
    cout << max;
    return 0;
}