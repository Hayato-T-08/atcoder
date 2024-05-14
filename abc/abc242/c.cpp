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
using mint = modint998244353;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    vector<vector<mint>> dp(n+1,vector<mint>(10,0));
    rep(i,10) dp[1][i] = 1;
    for(int i = 1; i <= n - 1 ;i ++ ){
        for(int j = 1; j<= 9; j++){
            for(int k = 1; k <= 9; k++){
                if(abs(j-k) <= 1) dp[i+1][j] += dp[i][k];
            }
        }
    }
    mint ans = 0;
    for(int i = 1; i <= 9; i++){
        ans += dp[n][i];
    }
    cout << ans.val() << endl;
    return 0;
}