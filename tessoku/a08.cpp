#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;

    vector<vector<int>> x(h,vector<int>(w)),sum(h,vector<int>(w,0));
    rep(i,h)rep(j,w){
        cin>>x[i][j];
    }

    rep(i,h)rep(j,w){
        if(j==0) sum[i][j]=x[i][j];
        else sum[i][j]=sum[i][j-1]+x[i][j];
    }

    rep(j,w)rep(i,h){
        if(i==0){
            sum[i][j]=sum[i][j];
        }else{
            sum[i][j]=sum[i-1][j]+sum[i][j];
        }
    }

    int q;
    cin>>q;
    vector<int> a(q),b(q),c(q),d(q);
    rep(i,q){ 
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        a[i]--;
        b[i]--;
        c[i]--;
        d[i]--;
        }
    
    rep(i,q){
        if(a[i]-1<0 and b[i]-1<0){
            cout<<sum[c[i]][d[i]]<<endl;
    }else if(a[i]-1<0){
        cout<<sum[c[i]][d[i]]-sum[c[i]][b[i]-1]<<endl;
    }else if(b[i]-1<0){
        cout<<sum[c[i]][d[i]]-sum[a[i]-1][d[i]]<<endl;

    }else{
         cout<<sum[a[i]-1][b[i]-1]+sum[c[i]][d[i]]-sum[a[i]-1][d[i]]-sum[c[i]][b[i]-1]<<endl;
    }
        
       
    }
}


