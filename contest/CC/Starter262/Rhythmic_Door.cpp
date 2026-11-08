#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ac = (s[0] == 'A'), bc = (s[0] == 'B'), c = 0;
        for (int i = 2; i < n; i++)
        {
            if (s[i - 2] == s[i - 1] && s[i - 1] == s[i])
                c++, i += 2;
        }
        cout << c << endl;
    }
}
