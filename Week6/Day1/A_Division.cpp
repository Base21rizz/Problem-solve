#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--) 
    {
        int rating;
        cin >> rating;
        if(rating <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if(rating <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if(rating <= 1899)
        {
            cout <<"Division 2" << endl;
        }
        else if(rating >= 1900)
        {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}