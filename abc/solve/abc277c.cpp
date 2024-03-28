
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>> graph;
map<int,bool> seen;
int ans=1;
void dfs(int v){
    seen[v]=true;
    if(v>ans) ans=v;
    for(auto x:graph[v]){
        int nex=x;
        if(seen[nex]==false) dfs(nex);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    cout<<ans<<endl;
}