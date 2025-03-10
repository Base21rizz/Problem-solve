#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);
    if(s1<s2)
    {
        cout << "-1";
    }
    else if(s1>s2)
    {
        cout << "1";
    }
    else if(s1 == s2)
    {
        cout << "0";
    }
    return 0;
}