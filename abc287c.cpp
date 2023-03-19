#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> graph;
vector<bool> seen;

void dfs(int v){
    seen[v]=true;

    for(auto next_v:graph[v]){
        if(seen[next_v]) continue;
        dfs(next_v);
    }
}
int main(){

    cin>>n>>m;
    graph.resize(n);
    seen.assign(n,false);


    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    if(m!=n-1){
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(graph[i].size()>2){
            cout<<"No"<<endl;
            return 0;
        }      
    }

    dfs(0);

    for(int i=0;i<n;i++){
        if(!seen[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    return 0;

}