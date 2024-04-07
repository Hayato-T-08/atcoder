#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
vector<vector<int>> ans;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n;
void dfs(int x, int y,int cnt, int d){
    
    
    
    if(x == n/2 && y == n/2) return;
    ans[x][y] = cnt;
    int nx = x + dx[d];
    int ny = y + dy[d];
    if(nx < 0 || nx >= n || ny < 0 || ny >= n || ans[nx][ny] != -1){
        d = (d+1)%4;
        nx = x + dx[d];
        ny = y + dy[d];
    }else if(ans[nx][ny] != -1){
        d = (d+1)%4;
        nx = x + dx[d];
        ny = y + dy[d];
    }
    dfs(nx,ny,cnt+1,d);



}
int main() {
    cin >> n;
    ans.resize(n,vector<int>(n,-1));
    ans[n/2][n/2] = -100;
    dfs(0,0,1,0);
    rep(i,n){
        rep(j,n){
            if(ans[i][j] ==  -100){
                cout << "T"<< " ";
                continue;
            }
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}