#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int arr[100000];
    int k,l,m,n,d,ans=0;
    cin >> k >> l >> m >> n >>d;
    for (int i = 0; i < d; i++)
    {
        arr[i] = i+1;
    }
    for (int i = 0; i < d; i++)
    {
        if(arr[i]%k==0 || arr[i]%l==0 || arr[i]%m == 0 || arr[i]%n==0)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}

