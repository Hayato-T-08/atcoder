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
    ll n;
    cin >> n;
    vector<ll> pow10(17);
    pow10[0] = 1;
    rep1(i,16){
        pow10[i] = pow10[i-1]*10;
    }

    vector<ll> num(10);

    auto f = [&](ll k, ll dp_n, ll p) -> ll {
        if(k < dp_n) return pow10[p]*(n/pow10[p+1]+1);
        else if(k > dp_n) return pow10[p] * (n/pow10[p+1]);
        else return pow10[p]*(n/pow10[p+1]) + (n%pow10[p]) + 1;
    };
    ll tmp = n;
    ll cnt = 0;
    ll ans = 0;
    while(tmp != 0){
        ll dp_n = tmp % 10;
        for(ll k = 1; k <= 9;k++ ){
            ans += k * f(k,dp_n,cnt);
        }
        tmp/=10;
        cnt++;

    }
    cout << ans << endl;
    return 0;
}