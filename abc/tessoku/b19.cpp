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
    int N,W;
    cin >> N >> W;
    
    vector<ll> w(N),v(N);
    rep(i,N) cin >> w[i] >> v[i];

    //iがi番目まで選んでjが価値vにするのにかかる重さの最小値
    vector dp(N+1,vector<ll> (100001,linf));
    dp[0][0] = 0;

    rep1(i,N){
        rep(j,100001){
            chmin(dp[i][j],dp[i-1][j]);
            if(j-v[i-1]>=0){
                chmin(dp[i][j],dp[i-1][j-v[i-1]]+w[i-1]);
            }
        }
    }
    ll idx = 0;
    rep(i,100001){
        if(dp[N][i] <= W) idx = i;
    }
    cout << idx << endl;
    return 0;
}