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
    string s,t;
    cin >> s >> t;
    int ans = 0;
    int n = s.size(),m = t.size();


    vector<vector<int>> dp(n+1,vector<int> (m+1,inf));
    dp[0][0] = 0;
    rep(i,n+1){
        rep(j,m+1){
            if(i >= 1)chmin(dp[i][j],dp[i-1][j]+1);//削除
            if(j >= 1) chmin(dp[i][j],dp[i][j-1]+1);//挿入
            if(i >= 1 and j >= 1){
                if(s[i-1] == t[j-1]) chmin(dp[i][j],dp[i-1][j-1]);//なにもしない
                else chmin(dp[i][j],dp[i-1][j-1]+1);//変更
            }
        }
    }
    // rep(i,n+1){
    //     rep(j,n+1) cout << dp[i][j];
    //     cout << endl;
    // }
    cout << dp[n][m] << endl;
    return 0;
}