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
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(ll& a, ll b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    ll ans = -inf;
    ll sum = 0;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    rep(i,n){
        sum += a[i];
    }
    rep(i,n){
        ll tmp = sum - a[i] + b[i];
        chmax(ans,tmp);
    }
    cout << ans << endl;
    return 0;
}