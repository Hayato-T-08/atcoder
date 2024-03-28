#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    vector<vector<char>> grid(8,vector<char>(8));
    rep(i,8)rep(j,8) cin>>grid[i][j];
    int tate,yoko;
    rep(i,8)rep(j,8){
        if(grid[i][j]=='*'){
            tate=i;
            yoko=j;
        }
    }
    yoko++;

    cout<<char('a'+yoko-1)<<8-tate<<endl;
}