#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    char s,k;
    int a,b,c;
    cin>>a>>s>>b>>k>>c;
    if(s == '+'){
        if(a+b == c){
            Yes
        }
        else {
        cout<<a+b;
        }
    }
    else if(s == '-'){
        if(a-b == c){
            Yes
        }
        else {
        cout<<a-b;
    }}else if(s == '/'){
        if(a/b == c){
            Yes
        }
        else {
        cout<<a/b;
    }}
    else if(s == '*'){
        if(a*b == c){
            Yes
        }
        else {
            cout<<a*b;
        }
    }
    return 0;
}
