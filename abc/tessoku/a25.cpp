#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector dp(h,vector<ll>(w,0));
    dp[0][0]=1;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#') continue;
            if(i+1 < h && s[i+1][j] == '.') dp[i+1][j] += dp[i][j];
            if(j+1 < w && s[i][j+1] == '.') dp[i][j+1] += dp[i][j];
        }
    }
    cout << dp[h-1][w-1] << endl;
    // rep(i,h){
    //     rep(j,w) cout << dp[i][j] << " ";
    //     cout << endl;
    // }
    return 0;
}