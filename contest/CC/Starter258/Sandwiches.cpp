#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int bc = b + c;
    if (bc <= a)
        cout << bc << endl;
    else
        cout << a / 2 << endl;
    return 0;
}
