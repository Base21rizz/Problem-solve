#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char>v;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(auto c:s)
    {
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            v.push_back('.');
            v.push_back(c);
        }
    }
    for(char c:v)
    {
        cout << c;
    }
    return 0;
}