#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    string subS = "phitron";
    for (char &c : s)
        c = tolower(static_cast<unsigned char>(c));

    stringstream sss;
    sss << s;
    string word;
    int count = 0;
    while (sss >> word)
    {
        if (word == subS)
            count++;
    }
    cout << count;
    return 0;
}