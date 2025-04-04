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
    ios::sync_with_stdio(false); cin.tie(NULL);
    string a,b,x,y;
    getline(cin,a);
    getline(cin,b);
    int pos1 = a.find(" ");
    int pos2 = b.find(" ");
    x = (pos1!=string::npos) ? a.substr(pos1+1) : a;
    y = (pos2!=string::npos) ? b.substr(pos2+1) : b;
    if(x == y)
    {
        cout << "ARE Brothers" << endl;
    }   
    else
    {
        cout <<  "NOT";
    }
    return 0;
}
