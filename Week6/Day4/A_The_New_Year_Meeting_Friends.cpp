#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int arr[3],bio = 0,ans = 0;
    for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }    
    sort(arr, arr + 3);
    for (int i = 0; i < 2; i++)
    {
        bio = (arr[i+1] - arr[i]);
        ans += bio;
    }
    cout << ans;
    return 0;
}