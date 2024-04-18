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
using ull = unsigned long long;

void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    string t;
    int n;
    cin >> t;
    cin >> n;
    int m = t.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, inf));
    dp[0][0] = 0;

    rep(i,n){
        int a;
        cin >> a;
        rep(j,m+1) dp[i+1][j] = dp[i][j];

        rep(ai,a){
            string s;
            cin >> s;
            rep(j,m+1){
                if(j+s.size() > m) continue;    
                bool ok = true;
                rep(k,s.size()){
                    if(t[j+k] != s[k]) ok = false;
                }
                if(ok) dp[i+1][j+s.size()] = min(dp[i+1][j+s.size()], dp[i][j]+1);
            }
        }
    }
    int ans = dp[n][m];
    if(ans == inf) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
