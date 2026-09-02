#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,r;
	cin >> l >> r;
    if(l != r )
        cout << "Yes" << endl;
    else if(l == r && l % 2 == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}
