#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w,n;
    cin>>h>>w>>n;

    vector<int> a(n+1),b(n+1),c(n+1),d(n+1);

    rep3(i,1,n+1) cin>>a[i]>>b[i]>>c[i]>>d[i];

    vector<vector<int>> sum(h+2,vector<int>(w+2,0)),t(h+2,vector<int>(w+2,0));

    rep3(i,1,n+1){

        t[a[i]][b[i]]++;
        t[a[i]][d[i]+1]--;
        t[c[i]+1][d[i]+1]++;
        t[c[i]+1][b[i]]--;
    }

    rep3(i,1,h+1){
        rep3(j,1,w+1){
            sum[i][j]=sum[i][j-1]+t[i][j];
        }
    }

    rep3(j,1,w+1)rep3(i,1,h+1) sum[i][j]=sum[i-1][j]+sum[i][j];

    rep3(i,1,h+1){
        rep3(j,1,w+1) cout<<sum[i][j]<<" ";
        cout<<endl;
    }
}