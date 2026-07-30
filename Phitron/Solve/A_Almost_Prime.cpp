#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;
bool is_prime(int n)
{
    if(n == 2) return true;
    if(n%2 == 0 || n < 2) return false;
    for (int i = 3; i*i <= n; i+= 2)
    {
        if(n%i == 0) return false;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<bool> v(n+1,0);
    v[2] = 1;
    for (int i = 3; i <= n; i+=2)
    {
        if(is_prime(i)){
            v[i] = 1;
        }
    }
    int count1 = 0,count2 = 0;
    for (int i = 6; i <= n; i++)
    {
        int count1 = 0;
        for (int j = 2; j <= i/2; j++)
        {
            if(i%j == 0 && v[j])
            {
                count1++;
            }
            if(count1>2) break;
        }
        if(count1 == 2) count2++;
    }
    cout << count2;
    return 0;
}

