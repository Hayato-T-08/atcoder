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
    int x,y,z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<ll>> dp(n+1,vector<ll>(2,linf));
    dp[0][0] = 0;
    rep(i,n){

            if(s[i] == 'A'){
                dp[i+1][0] = min({dp[i+1][0],dp[i][1]+y+z,dp[i][0]+y});
                dp[i+1][1] = min({dp[i+1][1],dp[i][1]+x,dp[i][0]+x+z});
            }else{
                dp[i+1][0] = min({dp[i+1][0],dp[i][1]+x+z,dp[i][0]+x});
                dp[i+1][1] = min({dp[i+1][1],dp[i][1]+y,dp[i][0]+y+z});
            }
        
    }
    cout << min(dp[n][0],dp[n][1]) << endl;
    return 0;
}