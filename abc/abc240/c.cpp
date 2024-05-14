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
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n,x;
    cin >> n >> x;
    vector<vector<bool>> dp(n+1,vector<bool>(10001,false));
    dp[0][0] = true;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        rep(j,10001){
            if(dp[i][j]){
                dp[i+1][j+a] = true;
                dp[i+1][j+b] = true;
            }
        }
    }
    if(dp[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}