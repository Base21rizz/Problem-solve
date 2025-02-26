#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--) 
    {
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            if(arr[i] == 2)
            {
                arr[i] = 0;
            }
            else{
                cin >> arr[i];
            } 
        }
        sort(arr , arr+5);
        cout << arr[0] << " ";
        arr[0] = arr[1] + arr[2];
        sort(arr , arr+5);
        cout << arr[2] << endl;
        
    }
    return 0;
}