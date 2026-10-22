#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;cin >> tc;
    while(tc--){
        int n,s;cin >> n >> s;
        if(s==0) cout << 0 << endl;
        else if(s>0){
            if(n == 1 && s != 4) cout << -1 << endl;
            else if(n==1 && s==4) cout << 1 << endl;
            else{
                int ch = 0,cor=0;
                while(ch<s){
                    ch+=4;cor++;
                }
                if(ch != s) cor+=(ch-s);
                cout << cor << endl;
            }
        }
    }
}
