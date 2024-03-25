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
    ll k;
    cin >> k;
    vector<mint> dp(k+1,0);
    if(k%9 != 0){
        cout << 0 << endl;
        return 0;
    }
    dp[0] = 1;
    rep1(i,k){
        int b = min(i,9);
        for(int j = 1; j <= b; j++){
            dp[i] += dp[i-j];
        }
    }
    cout << dp[k].val() << endl;
    return 0;
}