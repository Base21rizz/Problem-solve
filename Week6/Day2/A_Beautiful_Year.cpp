#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int y,sss;
    string s;
    cin >> y;
    bool kj = false;
    for (int i = 1; i < 10000; i++)
    {
        sss = y + i;
        s = to_string(sss);
        sort(s.begin(),s.end());
        if(s[0] != s[1] && s[1] != s[2] && s[2] != s[3])
        {
            cout << sss;
            break;
        }
    } 
    return 0;
}