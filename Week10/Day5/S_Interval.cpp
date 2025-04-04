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
    float x;
    cin >> x;
    if(x>=0 && x<=25)
    {
        cout << "Interval [0,25]";
    }
    else if(x>25 && x<=50)
    {
        cout << "Interval (25,50]";
    }
    else if(x>50 && x<=75)
    {
        cout << "Interval (50,75]";
    }
    else if(x>75 && x<=100)
    {
        cout << "Interval (75,100]";
    }
    else
    {
        cout << "Out of Intervals";
    }
    return 0;
}
