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
    int n;
    cin >> n;
    vector<int> a(n+1,0),b(n+1,0);
    rep3(i,1,n){
        cin >> a[i];
    }

    rep3(i,1,n){
        cin >> b[i];
    }

    vector<ll> dp(n+1,-10000000);
    dp[1] = 0;
    rep3(i,1,n){
        dp[a[i]] = max(dp[a[i]],dp[i] + 100);
        dp[b[i]] = max(dp[b[i]],dp[i] + 150);
    }
    
    cout << dp[n] << endl;
    return 0;
}