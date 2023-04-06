#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> grid(h,vector<char>(w));
    vector<vector<int>> newgrid(h,vector<int>(w,0));
    rep(i,h)rep(j,w) cin>>grid[i][j];
    rep(i,h)rep(j,w){
        if(grid[i][j]=='#'){
            if(i-1>=0 and grid[i-1][j]=='.') newgrid[i-1][j]++;
            if(j-1>=0 and grid[i][j-1]=='.') newgrid[i][j-1]++;
            if(i+1<h and grid[i+1][j]=='.') newgrid[i+1][j]++;
            if(j+1<w and grid[i][j+1]=='.') newgrid[i][j+1]++;
            if(i-1>=0 and j-1>=0 and grid[i-1][j-1]=='.') newgrid[i-1][j-1]++;
            if(i+1<h and j+1<w and grid[i+1][j+1]=='.') newgrid[i+1][j+1]++;
            if(i-1>=0 and j+1<w and grid[i-1][j+1]=='.') newgrid[i-1][j+1]++;
            if(i+1<h and j-1>=0 and grid[i+1][j-1]=='.') newgrid[i+1][j-1]++;
        }
    }

    rep(i,h){

        rep(j,w){
        if(newgrid[i][j]==0 and grid[i][j]=='#'){
            cout<<'#';
        }else{
            cout<<newgrid[i][j];
        }
    
    }
    cout<<endl;
    }

}
/*    cin >> H >> W;
    rep(y, 0, H) cin >> B[y];
 
    rep(y, 0, H)rep(x, 0, W) if(B[y][x] == '.') {
        int c = 0;
        rep(dx, -1, 2) rep(dy, -1, 2) {
            if (dx == 0 and dy == 0) continue;
            int xx = x + dx;
            int yy = y + dy;
            if (0 <= xx and xx < W and 0 <= yy and yy < H) {
                if (B[yy][xx] == '#') c++;
            }
        }
        B[y][x] = char('0' + c);
    }
 
    rep(y, 0, H)cout << B[y] << endl;*/