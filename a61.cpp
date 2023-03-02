#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m+1);
    vector<int> b(m+1);
    vector<vector<int>> g(n+1);
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];
    }

    for(int i=1;i<=m;i++){
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    for(int i=1;i<=n;i++){
        cout<<i<<": {";
        for(int j=0;j<int(g[i].size());j++){
            if(j>=1) cout<<", ";
            cout<<g[i][j];
        }
        cout<<"}"<<endl;
    }
}