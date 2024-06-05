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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int h,w,n;
    cin >> h >> w >> n;
    vector grid(h+1,vector<int>(w+1));
    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;
        grid[a][b]++;
        grid[c+1][d+1]++;
        grid[a][d+1]--;
        grid[c+1][b]--;
    }

    vector ans(h,vector<int> (w));
    rep(i,h){
        rep(j,w){
            if(i == 0) ans[i][j] = grid[i][j];
            else{
                ans[i][j] = ans[i-1][j] + grid[i][j];
            }
        }
    }

    rep(i,h){
        rep(j,w){
            if(j == 0) continue;
            else ans[i][j] += ans[i][j-1];
        }
    }

    rep(i,h){
        rep(j,w) cout << ans[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}