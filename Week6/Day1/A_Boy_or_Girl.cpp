#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    ll x=0;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length();i++)
    {
        if (s[i] != s[i+1])
        {
            x++;
        }
    }
    if (x % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }   
    return 0;
}