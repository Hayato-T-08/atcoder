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
const ll mod = 998244353;
const ll linf = 1e18;
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    ll a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    a %= mod;
    b %= mod;
    c %= mod;
    d %= mod;
    e %= mod;
    f %= mod;
    
    ll left = (((a*b)%mod)*c)%mod;
    ll right = (((d*e)%mod)*f)%mod;
    ll ans = (left - right + mod) % mod;
    cout << ans << endl;
    return 0;
}