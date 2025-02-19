#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,bill=0;
    cin >> n;

    bill += n/100;
    n = n%100;

    bill += n/20;
    n = n%20;

    bill += n/10;
    n = n%10;

    bill += n/5;
    n = n%5;

    bill += n/1;
    n = n%1;

    cout << bill;
    return 0;
}