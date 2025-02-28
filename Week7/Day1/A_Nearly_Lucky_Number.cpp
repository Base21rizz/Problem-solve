#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s;
    int score = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            score++;
        }
    }
    if(score == 4 || score == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}