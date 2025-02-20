#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,sum = 0;
    double ans;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    ans = (((sum*1.0) /100)/n)*100;
    cout << fixed << setprecision(12)<<ans;
    return 0;
}
