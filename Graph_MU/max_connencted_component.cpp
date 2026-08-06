#include<bits/stdc++.h>
using namespace std;
vector<int> g[5000];
int mx = 0;
int rncount =0;
bool vis[5000];
void dfs(int src){
    vis[src] = 1;
    rncount++;
    for (int i = 0; i < g[src].size(); i++)
    {
        int child = g[src][i];
        if(vis[child]) continue;
        dfs(child);    
    }
}

int main(){
    int n, m;
    cin >> n >>m;
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i]) {
            dfs(i);
        }
        mx = max(rncount, mx);
        rncount = 0;
    }
    cout << mx << endl;
    
    return 0;
}