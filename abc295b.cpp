#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> grid(r,vector<char>(c)),ans(r,vector<char>(c));
    rep(i,r)rep(j,c) cin>>grid[i][j];
    ans=grid;

    rep(i,r)rep(j,c){
        if(grid[i][j]>='1' and grid[i][j]<='9'){
            int tmp=grid[i][j]-'0';
            rep(a,r)rep(b,c){
                int man=abs(i-a)+abs(j-b);
                
                if(man<=tmp) ans[a][b]='.';
            }
        }
    }

    rep(i,r){
        rep(j,c){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}