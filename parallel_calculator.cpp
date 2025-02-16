#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    float a,b,c,sum,par;
    cin >> a >> b >> c;
    if(a>0 && b> 0 && c== 0)
    {
        par = (a*b)/(a+b);
    }
    else if(a>0 && b> 0 && c>0)
    {
        par = (a*b*c)/((b*c)+(a*c)+(a*b));
    }
    cout << par;
    return 0;
}