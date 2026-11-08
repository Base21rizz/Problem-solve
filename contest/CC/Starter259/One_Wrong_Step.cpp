#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
                y--;
        }
        x = abs(x);
        y = abs(y);
        if ((x == 2 && y == 0) || (x == 0 && y == 2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
