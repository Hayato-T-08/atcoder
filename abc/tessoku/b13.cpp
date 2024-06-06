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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n ,k;
    cin >> n >> k;
    vector<ll> a(n),sum(n);
    rep(i,n) cin >> a[i];

    sum[0] = a[0];
    rep3(i,1,n) sum[i] = sum[i-1] + a[i];
    int r = 0;
    ll ans = 0;
    rep(l,n){
        ll left = (l == 0) ? 0 : sum[l-1];
        while(sum[r] - left <= k and r < n) r++;
    
        ans += (r - l);

    }

    cout << ans << endl;

    return 0;
}