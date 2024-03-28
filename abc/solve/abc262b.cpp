#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n,m;

    cin>>n>>m;
    vector<vector<bool>> graph(n+1,vector<bool>(n+1,false));
    for(int i=1;i<=m;i++){
        int u,m;
        cin>>u>>m;
        graph[u][m]=true;
        graph[m][u]=true;
    }
    int ans=0;
    for(int a=1;a<=n;a++){
        for(int b=a+1;b<=n;b++){
            for(int c=b+1;c<=n;c++){
                if(graph[a][c]&&graph[a][b]&&graph[b][c]) ans++;
            }
        }
    }

    cout<<ans<<endl;
    
}