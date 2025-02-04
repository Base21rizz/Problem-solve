#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,m;
    cin >> n >> m;
    bool ok = isPrime(n);
    bool ko = isPrime(m);
    bool nec = true;
    for (int i = n+1; i < m; i++)
    {
        if (isPrime(i))
        {
            nec = false;
            break;
        }  
    }
    if (ok && ko && nec)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}