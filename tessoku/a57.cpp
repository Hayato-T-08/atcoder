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
    int n,q;
    cin >> n >> q;
    vector<int> a(n+1);
    rep1(i,n) cin >> a[i];
    vector<vector<int>> dp(30,vector<int>(n+1));
    rep1(i,n) dp[0][i] = a[i];
    rep1(i,29){
        rep1(j,n){
            dp[i][j] = dp[i-1][dp[i-1][j]];
        }
    }

    rep(i,q){
        int x,y;
        cin >> x >> y;
        int cur = x;
        for(int d = 29; d>=0; d--){
            if((y/(1<<d))%2 == 1){
                cur = dp[d][cur];
            }
        }
        cout << cur << endl;
    }
    return 0;
}