#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin >> s;
    string vasya = "WUB";
    size_t pos;
    while ((pos = s.find(vasya)) != string::npos)
    {
        s.replace(s.find(vasya),vasya.size(), " ");
    }
    stringstream ss(s);
    string word,result = " ";
    while (ss >> word)
    {
        if(!result.empty())
        {
            result += " ";
        }
        result += word;
    }
    cout << result << endl;
    return 0;
}