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
    ll n,m,t;
    cin >> n >> m >> t;
    vector<ll> a(n-1);
    map<ll,ll> mp;
    vector<bool> is_bounus(n-1,false);
    rep(i,n-1) cin >> a[i];
    rep(i,m) {
        ll x,y;
        cin >> x >> y;
        x--;
        mp[x] = y;
    }
    for(auto x:mp){
        is_bounus[x.first] = true;
    }
    vector<bool> dp(n,false);
    dp[0] = true;
    rep(i,n-1){
        if(dp[i]){
            t -= a[i];
            if(t <= 0){
                dp[i+1] = false;
            }else{
                dp[i+1] = true;
                if(is_bounus[i+1]){
                    t += mp[i+1];
                }
            }
        }else{
            dp[i+1] = false;
        }
    }
    if(dp[n-1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}