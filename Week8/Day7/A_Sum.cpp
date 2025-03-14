#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--) 
    {
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int number = 0;
            cin >> number;
            v.push_back(number);
        }
        sort(v.begin(),v.end());
        if(v[0]+v[1] == v[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}