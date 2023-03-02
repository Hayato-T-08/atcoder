#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> visited;
stack<int> a,b;
    int n,m;
void dfs(const Graph &g,int v){
    if(v==n){
        b=a;
        return;
    }
    visited[v]=true;
    for(auto next:g[v]){
        if(visited[next]) continue;
        a.push(next);
        dfs(g,next);
        a.pop();
    }
}
int main(){

    cin>>n>>m;
    Graph g(n+1);
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
   visited.assign(n+1,false) ;
   a.push(1);
   dfs(g,1);


    vector<int> answer;
    while(!b.empty()){
        answer.push_back(b.top());
        b.pop();
    }
    reverse(answer.begin(),answer.end());
    for(auto x:answer){
        cout<<x<<" ";
    }
}