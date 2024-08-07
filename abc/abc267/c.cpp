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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    ll sum = 0;
    for(int i = 0; i < m; i++){
        sum += a[i];
    }

    ll now = 0;
    rep(i,m){
        now += (i+1)*a[i];
    }
    ll ans = now;
    // cout << now << endl;
    for(int i = 1; i < n - m + 1 ; i++ ){
        now -= sum;
        now += m*a[i+m-1];
        // cout << now << endl;
        chmax(ans,now); 
        sum -= a[i-1];
        sum += a[i+m-1];
    }
    cout << ans << endl;
    return 0;
}