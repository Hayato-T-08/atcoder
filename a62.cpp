#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> visited;

void dfs(const Graph &g,int v){
    visited[v]=true;
    for(auto next:g[v]){
        if(visited[next]) continue;
        dfs(g,next);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    Graph g(n+1);
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
   visited.assign(n+1,false) ;
   dfs(g,1);
   bool ans=true;
   for(int i=1;i<=n;i++){
    if(visited[i]==false){
        ans=false;
    }
   }
   if(ans) cout<<"The graph is connected."<<endl;
   else cout<<"The graph is not connected."<<endl;
}