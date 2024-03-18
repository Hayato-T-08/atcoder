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
    int n;
    cin >> n;
    Graph G(n+1);
    rep3(i,2,n+1){
        int a;
        cin >> a;
        G[a].push_back(i);
    }

    vector<int> dp(n+1, 0);
    for(int i=n;i>=1;i--){
        for(auto next : G[i]){
            dp[i] += dp[next] + 1;
        }
    }

    rep1(i,n){
        cout << dp[i] << " ";
    }
    return 0;
}