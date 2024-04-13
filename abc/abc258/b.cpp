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
int dx[8] = {0,1,0,-1,1,1,-1,-1};
int dy[8] = {1,0,-1,0,1,-1,-1,1};
int main() {
    int n;
    cin >> n;
    P start = make_pair(0,0);
    vector<string> tmp(n);
    vector<vector<int>> grid(n, vector<int>(n));
    rep(i,n) cin >> tmp[i];
    rep(i,n)rep(j,n){
        grid[i][j] = tmp[i][j] - '0';
    }

    ll ans = -100;
    rep(i,n){
        rep(j,n){
            start = make_pair(i,j);
            
            rep(k,8){
                ll tmp = grid[i][j];
                P cur = start;
                rep(l,n-1){
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if(nx <0) nx += n;
                    if(ny <0) ny += n;
                    if(nx >= n) nx -= n;
                    if(ny >= n) ny -= n;
                    tmp *= 10;
                    tmp += grid[nx][ny];
                    cur = make_pair(nx,ny);
                }
                ans = max(ans, tmp);
            }
        }
    }

    cout << ans << endl;
    return 0;
}