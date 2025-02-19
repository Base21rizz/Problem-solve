#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,grp = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] == 10)
        {
            if(arr[i+1] != 10)
            {
                grp++;
            }
        }
        if(arr[i] == 01)
        {
            if(arr[i+1] != 01)
            {
                grp++;
            }
        }
    }
    cout << grp;
    return 0;
}