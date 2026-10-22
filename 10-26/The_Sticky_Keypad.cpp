#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string n;
        char d;
        cin >> n >> d;
        bool flag = true;
        int pos = 1e9;
        int ns = n.size();
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == d)
            {
                pos = i;
                break;
            }
        }
        if (pos == int(1e9))
        {
            cout << n << endl;
            continue;
        }
        if (d != '9')
        {
            n[pos]++;
            for (int i = pos + 1; i < ns; i++)
            {
                if (d != '0')
                    n[i] = '0';
                else
                    n[i] = '1';
            }
        }
        else
        {
            for (int i = pos + 1; i < ns; i++)
                n[i] = '0';
            n[pos] = '0';
            pos--;
            while (pos >= 0 && n[pos] == '8')
                n[pos--] = '0';
            if (pos >= 0)
                n[pos]++;
            else
                n = '1' + n;
        }
        cout << n << endl;
    }
}