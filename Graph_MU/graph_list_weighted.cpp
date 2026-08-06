#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> g[5000];

int main(){
    int n, m;
    cin >> n >>m;
    for(int i=1; i<=m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    // learn the printing
    return 0;
}