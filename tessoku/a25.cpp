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
int main() {
    int h,w;
    cin >> h >> w;
    vector<vector<char>> c(h+1,vector<char>(w+1));
    rep1(i,h){
        rep1(j,w){
            cin >> c[i][j];
        }
    }

    vector<vector<ll>> dp(h+1,vector<ll>(w+1,0));
    dp[1][1] = 1;
    rep1(i,h){
        rep1(j,w){
            if(i == 1 && j == 1) continue;
            if(i >= 2 && c[i-1][j] == '.') dp[i][j] += dp[i-1][j];
            if(j >=2 && c[i][j-1] == '.') dp[i][j] += dp[i][j-1];
        }
    }
    cout<<dp[h][w]<<endl;
}