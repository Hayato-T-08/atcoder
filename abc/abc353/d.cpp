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
using mint = modint998244353;
const int inf = 1e9;
const ll mod = 998244353;
const ll linf = 1e18;
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}
ll power(ll x, ll n){
    ll res = 1;
    while(n > 0){
        if(n & 1) res = res * x;
        x = x * x;
        x %= mod;
        n >>= 1;
    }
    res %= mod;
    return res;
}
ll GetDigit(ll num){
	ll digit = 0;
	while(num != 0){
		num /= 10;
		digit++;
	}
	return digit;
}

template <typename T>
size_t countDigits(T n) {
  string tmp;

  tmp = to_string(n);
  return tmp.size();
}

int main() {
    int n;
    cin >> n;
    vector<ll> a(n),sum(n,0);
    rep(i,n){
        cin >> a[i];
    }

    ll ans = 0;
    rep(i,n){
        ans += (i*a[i]%mod);
        ans %= mod;
        if(ans < 0) ans += mod;
        ans %= mod;
    }
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1] + a[i-1];
        sum[i] %= mod;
        if(sum[i] < 0) sum[i] += mod;
        sum[i] %= mod;
    }
    // for(auto x : sum){
    //     cout << x << " ";
    // }

    vector<ll> digit(n,0);
    for(int i=1;i<n;i++){
        digit[i] = countDigits(a[i]);
    }

    for(int i=1;i<n;i++){
        ans += (sum[i]*(power(10,digit[i]))%mod) % mod;
    }


    ans %= mod;
    cout << ans << endl;
    return 0;
}