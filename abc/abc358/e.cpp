#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el endl
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint998244353;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";


using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int k;
    cin >> k;
    vector<int> c(26);

    rep(i,26) cin >> c[i];

    vector<vector<mint>> dp(k+1,vector<mint>(26,0));
    rep(i,26) if(c[i] > 0) dp[1][i] = 1;

    rep3(i,1,k){
        rep(j,26){
            dp[i+1][j] = dp[i][j];
            rep(k,26){
                if(j == k){
                    if(c[k] >= i+1) dp[i+1][j]++;
                }else{
                    // if(c[k] >= 1) dp[i+1][k]++;
                }
            }
        }
    }

    mint ans = 0;
    rep(i,26){
        ans += dp[k][i];
    }
    cout << ans.val() << endl;
    rep(i,k+1){
        rep(j,4){
            cout << dp[i][j].val() << " ";
        }
        cout << endl;
    }
    return 0;
}