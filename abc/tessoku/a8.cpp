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
    int h,w;
    cin >> h >> w;
    vector<vector<int>> x(h,vector<int>(w)),sum(h+1,vector<int>(w+1,0));
    rep(i,h){
        rep(j,w) cin >> x[i][j];
    }
    int q;
    cin >> q;
    // 1 index;
    rep1(i,h){
        rep1(j,w){
            sum[i][j] = sum[i-1][j] + x[i-1][j-1];
        }
    }

    rep1(i,h){
        rep1(j,w){
            sum[i][j] += sum[i][j-1];
        }
    }

    // rep(i,h+1){
    //     rep(j,w+1) cout << sum[i][j] << " ";
    //     cout << endl;
    // }

    rep(i,q){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << sum[c][d] - sum[a-1][d] - sum[c][b-1] + sum[a-1][b-1] <<endl;
    }
    return 0;
}