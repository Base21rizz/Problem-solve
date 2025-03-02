#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<int>v;
    vector<int>s;
    int n,andu = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        v.pb(number);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[j] == i)
            {
                andu = j+1;
                s.pb(andu);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}