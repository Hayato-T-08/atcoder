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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(m+1,vector<int>(n+1,0));
    rep3(i,1,m+1){
        rep3(j,1,n+1){
            cin >> a[i][j];
        }
    }
    vector<vector<ll>> dp(m+1,vector<ll>(1<<n,1e9));
    dp[0][0] = 0;
    rep1(i,m){
        rep(j,1<<n){
            vector<int> already(n+1,0);
            rep1(k,n){
                if((j/(1<<(k-1)))%2 == 1) already[k] = 1;
            }

            int v = 0;
            rep1(k,n){
                if(already[k] == 1 || a[i][k] == 1){
                    v += 1<<(k-1);
                }
            }
            dp[i][j] = min(dp[i][j],dp[i-1][j]);
            dp[i][v] = min(dp[i][v],dp[i-1][j]+1);
        }
    }

    if(dp[m][(1<<n)-1] == 1e9) cout << -1 << endl;
    else cout << dp[m][(1<<n)-1] << endl;
}