#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,number,sum = 0;
    cin >> n;
    if(n == 1)
    {
        cout << '1';
        return 0;
    }
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        v.push_back(number);
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    sum = ceil((float)sum/2)-1;
    cout << sum;
    return 0;
}