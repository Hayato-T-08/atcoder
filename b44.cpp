#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    vector<vector<int>> a(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    vector<int> t(n+1);
    for(int i=1;i<=n;i++) t[i]=i;
    cin>>q;
    for(int i=1;i<=q;i++){
        int type;
        cin>>type;
        if(type==1){
            int x,y;
            cin>>x>>y;
            int tmp=t[x];
            t[x]=t[y];
            t[y]=tmp;
        }else{
            int x,y;
            cin>>x>>y;
            cout<<a[t[x]][y]<<endl;
        }
    }
}