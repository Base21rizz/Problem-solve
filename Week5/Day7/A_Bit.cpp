#include <bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    ll n,x;
    x = 0;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i] == "X++" || s[i] == "++X")
        {
            x++;
        }
        else if(s[i] == "--X" || s[i] == "X--")
        {
            x--;
        }
    }
    cout << x;
    return 0;
}