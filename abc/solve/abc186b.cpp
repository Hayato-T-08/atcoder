#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<int>> grid(h,vector<int>(w));
    rep(i,h)rep(j,w) cin>>grid[i][j];
    int min_val=1e6;
    rep(i,h)rep(j,w) min_val=min(min_val,grid[i][j]);
    int ans=0;
    rep(i,h)rep(j,w){
        if(grid[i][j]==min_val) continue;
        ans+=grid[i][j]-min_val;
    } 
    cout<<ans<<endl;
}