#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> x(n+1),y(n+1);
    rep3(i,1,n+1) cin>>x[i]>>y[i];

    int q;
    cin>>q;
    vector<int> a(q+1),b(q+1),c(q+1),d(q+1);
    rep3(i,1,q+1) {cin>>a[i]>>b[i]>>c[i]>>d[i];

    }

    vector<vector<int>> xy(1501,vector<int>(1501,0)),sum(1501,vector<int>(1501,0));
    rep3(i,1,n+1){
        xy[x[i]][y[i]]++;
    }

    rep3(i,1,1501){
        rep3(j,1,1501){

            sum[i][j]=xy[i][j]+sum[i][j-1];
        }
    }

    rep3(j,1,1501){
        rep3(i,1,1501){
             sum[i][j]=sum[i][j]+sum[i-1][j];
        }
    }



    rep3(i,1,q+1){

            cout<<sum[c[i]][d[i]]+sum[a[i]-1][b[i]-1]-sum[a[i]-1][d[i]]-sum[c[i]][b[i]-1]<<endl;;

    }
}