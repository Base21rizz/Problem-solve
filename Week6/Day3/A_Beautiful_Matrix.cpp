#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a,b,ans = 0;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    arr[2][2] = 1;
    ans = abs(a - 2) + abs (b - 2);
    cout << ans;
    return 0;
}