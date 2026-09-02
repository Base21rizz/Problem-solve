#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;cin >> tc;
	while(tc--){
	    int n,m,x;
	    cin >> n >>m >>x;
	    int row = ((x-1)/m)+1;
	    int nrow = n-row+1;
	    cout << min(row,nrow) <<endl;
	}
    return 0;
}
