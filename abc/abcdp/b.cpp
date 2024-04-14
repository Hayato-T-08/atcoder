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

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> h(n+1);
    rep1(i,n) cin >> h[i];
    vector<int> dp(n+1, inf);
    dp[1] = 0;
    rep1(i,n-1){
        rep3(j,i+1,i+k+1){
            if(j > n) break;
            dp[j] = min(dp[j], dp[i] + abs(h[i]-h[j]));
        }
    }
    cout << dp[n] << endl;
    return 0;
}