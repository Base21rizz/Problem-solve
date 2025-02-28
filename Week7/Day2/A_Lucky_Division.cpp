#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s;
    bool flag = true;
    vector<int> arr;
    arr = {4,7,47,74,444,447,474,477,744,747,777};
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != '4' && s[i] != '7')
        {
            flag = false;
            break;
        }
    }
    int n = stoi(s);
    
    if(flag)
    {
        cout << "YES";
    }
    else{
        for (int i = 0; i < arr.size(); i++)
        {
            if(n % arr[i] == 0)
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}