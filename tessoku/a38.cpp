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
    int d,n;
    cin >> d >> n;
    vector<int> l(n+1),r(n+1),h(n+1);
    rep1(i,n){
        cin>>l[i]>>r[i]>>h[i];
    }

    vector<int> dp(d+1,24);
    rep1(i,n){
        for(int j = l[i]; j<=r[i]; j++){
            dp[j] = min(dp[j],h[i]);
        }
    }

    ll ans = 0;
    rep1(i,d){
        ans += dp[i];
    }

    cout << ans << endl;
    return 0;
}