#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n+1);
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int id=0;
    int max=0;
    for(int i=1;i<=n;i++){
        int size=g[i].size();
        if(size>max){
            max=size;
            id=i;
        }
    }
    cout<<id<<endl;
}