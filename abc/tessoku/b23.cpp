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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];

    auto f = [&](int i,int j) -> double {
        return sqrt((x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
    };

    vector<vector<double>> dp((1<<n),vector<double> (n,1e9));
    //iがすでに訪問した都市の集合で現在地がjであるときの現時点での最小距離
    dp[0][0] = 0;

    rep(i,(1<<n)){
        rep(j,n){
            if (dp[i][j] >= 1e9) continue;//1を出発としていないものを除外
            for(int k = 0;k<n;k++){
                if(j == k) continue;
                chmin(dp[i | (1<<(k))][k], dp[i][j] + f(j,k));
            }
        }
    }
    cout << dp[(1<<n)-1][0] <<endl;
    return 0;
}