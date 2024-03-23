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

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    rep(i,n){
        ll sum = 0;
        rep(j,6){
            ll a;
            cin >> a;
            sum += a;
        }
        sum %= mod;
        if(sum < 0) sum += mod;
        if(i == 0){
            ans = sum;
        }else{
            ans*=sum;
            ans %= mod;
            if(ans < 0) ans += mod;
        }
    }
    cout << ans << endl;
    return 0;
}