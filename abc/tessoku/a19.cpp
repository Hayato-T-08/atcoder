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
    int n,W;
    cin >> n >> W;
    vector<ll> w(n),v(n);
    rep(i,n){
        cin >> w[i] >> v[i];
    }

    vector dp(n+1,vector<ll> (W+1,-inf));
    dp[0][0] = 0;
    //iが何番目まで選んだかjが重さjまでの価値の最大値
    rep1(i,n){
        rep(j,W+1){
            chmax(dp[i][j],dp[i-1][j]);
            if(j-w[i-1] >= 0){
                chmax(dp[i][j],dp[i-1][j-w[i-1]] + v[i-1]);
            }
        }
    }

    cout << *max_element(dp[n].begin(),dp[n].end()) << endl;
    return 0;
}