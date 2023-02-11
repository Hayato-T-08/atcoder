#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
    vector<vector<int>> masu(1501,vector<int>(1501,0));
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        masu[x][y]++;
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
    vector<vector<int>> sum(1501,vector<int>(1501,0));

    
    for(int i=1;i<=1500;i++){
        for(int j=1;j<=1500;j++) {
            if(j==1){
                sum[i][j]=masu[i][j];
            }else{
                sum[i][j]=sum[i][j-1]+masu[i][j];
            }
        }
    }

    for(int i=1;i<=1500;i++){
        for(int j=1;j<=1500;j++) {
            if(j==1){
                sum[j][i]=sum[j][i];
            }else{
                sum[j][i]=sum[j-1][i]+sum[j][i];
            }
        }
    }


    for(int i=1;i<=q;i++){
        cout<<sum[c[i]][d[i]]+sum[a[i]-1][b[i]-1]-sum[a[i]-1][d[i]]-sum[c[i]][b[i]-1]<<endl;
    }

}