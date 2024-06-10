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
    int n,m;
    cin >> n >> m;
    //i番目までのクーポンをもちいてj状態の商品まで無料にするのに必要な最小クーポンの枚数
    vector dp(m+1,vector<int> ((1<<n),inf));
    dp[0][0] = 0;
    vector<int> a(m);
    rep(i,m){
        int val = 0;
        int pow2 = 1;
        rep(i,n){
            int x;
            cin >> x;
            val += pow2*x;
            pow2*=2;
        }
        a[i] = val;
    }
    
    rep(i,m){
        rep(j,(1<<n)){
            chmin(dp[i+1][j],dp[i][j]);
            chmin(dp[i+1][j | a[i]],dp[i][j] + 1);
        }
    }

    // rep(i,m+1){
    //     for(auto x : dp[i]){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
    if(dp[m][(1<<n)-1] == inf) cout << -1 << endl;
    else cout << dp[m][(1<<n)-1] << endl;
    return 0;
}