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
ll Power(ll a,ll b, int mod){
    ll p = a, ans = 1;

    rep(i,60){//b<=1e9の制約
        if(ll(1LL<<(ll)i)&b) ans*=p;
        ans%=mod;
        p*=p;
        p%=mod;
    }
    return ans;
}
int main() {
    ll n,r;
    cin >> n >> r;
    ll val1=1,val2=1,val3=1;

    rep1(i,n){
        val1*=i;
        val1%=mod;
    }

    rep1(i,r){
        val2*=i;
        val2%=mod;
    }

    rep1(i,n-r){
        val3*=i;
        val3%=mod;
    }
    val2 = (val2*val3)%mod;
    
    ll val4 = Power(val2,mod-2,mod);
    ll ans = (val1)*(val4)%mod;
    std::cout << ans << endl;
    return 0;
}