#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<int>> masu(h+1,vector<int>(w+1,0));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++) cin>>masu[i][j];
    }

    vector<vector<int>> sum(h+1,vector<int>(w+1,0));
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++) {
            if(j==1){
                sum[i][j]=masu[i][j];
            }else{
                sum[i][j]=sum[i][j-1]+masu[i][j];
            }
        }
    }

    for(int i=1;i<=w;i++){
        for(int j=1;j<=h;j++) {
            if(j==1){
                sum[j][i]=sum[j][i];
            }else{
                sum[j][i]=sum[j-1][i]+sum[j][i];
            }
        }
    }

    
    int q;
    cin>>q;
    vector<int> a(q+1);
    a.push_back(-10);
    vector<int> b(q+1);
    b.push_back(-10);
    vector<int> c(q+1);
    c.push_back(-10);
    vector<int> d(q+1);
    d.push_back(-10);
    for(int i=1;i<=q;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for(int i=1;i<=q;i++){
        cout<<sum[c[i]][d[i]]+sum[a[i]-1][b[i]-1]-sum[a[i]-1][d[i]]-sum[c[i]][b[i]-1]<<endl;
    }

}