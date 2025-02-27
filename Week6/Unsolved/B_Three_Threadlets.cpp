#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    int tc,div = 1; cin >> tc;
    bool ans = false;
    while (tc--) 
    {
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if(arr[0] == arr[1] && arr[1] == arr[2])
        {
            div = 2;
        }
        else if(arr[2]%arr[0] == 0)
        {
            div = (arr[2]/arr[0]) - 1;
            if(arr[1] % arr[0])
            {
                div += arr[1]/arr[0];
            }
            
        }
        if(div <= 3)
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