#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s;
    string w = "hello";
    cin >> s;
    int j=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == w[j])
        {
            j++;
        }
        if(j == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;   
    return 0;
}