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
ll dis(ll x1, ll y1, ll x2, ll y2){
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}
int main() {
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,k) cin >> a[i], a[i]--;
    vector<ll> x(n), y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }
    vector<ll> dis(n, linf);

    rep(i,k){
        rep(j,n){
            if(j == a[i]) dis[j] = 0;
            dis[j] = min(dis[j], ::dis(x[a[i]], y[a[i]], x[j], y[j]));
        }
    }
    sort(dis.begin(), dis.end());
    ll ans = *max_element(dis.begin(), dis.end());
    cout << setprecision(16) << sqrt(ans) << endl;
    return 0;
}