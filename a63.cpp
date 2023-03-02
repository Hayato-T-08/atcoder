
#include <bits/stdc++.h>
using namespace std;
int n,m;
using Graph=vector<vector<int>>;
queue<int> q;
int main(){
    cin>>n>>m;
    Graph g(n+1);
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> dist(n+1,-1);
    q.push(1);
    dist[1]=0;
    while(!q.empty()){
        int pos=q.front();
        q.pop();
        for(int i=0;i<int(g[pos].size());i++){
            int to=g[pos][i];
            if(dist[to]==-1){
                dist[to]=dist[pos]+1;
                q.push(to);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<endl;
    }
}