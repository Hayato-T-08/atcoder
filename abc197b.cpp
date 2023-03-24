#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))

int main(){
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    vector<vector<char>> grid(h,vector<char>(w));
    rep(i,h)rep(j,w) cin>>grid[i][j];
    int ans=1;
    for(int i=x-1;i<h;i++){
        if(grid[i][y-1]=='#') break;
        if(grid[i][y-1]=='.') ans++;

    }

    for(int i=x-1;i>=0;i--){
        if(grid[i][y-1]=='#') break;
        if(grid[i][y-1]=='.') ans++;
   
    }

    for(int j=y-1;j<w;j++){
        if(grid[x-1][j]=='#') break;        
        ans++;
       
    }

    for(int j=y-1;j>=0;j--){
        if(grid[x-1][j]=='#') break;
        if(grid[x-1][j]=='.') ans++;
        
    }
    ans=ans-4;
    cout<<ans<<endl;

}