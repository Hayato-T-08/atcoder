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
    int n;
    cin >> n;
    vector<ll> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    ll x_med = x[n/2], y_med = y[n/2];
    ll ansA = 0, ansB = 0;
    rep(i,n){
        ansA += abs(x[i]-x_med);
        ansB += abs(y[i]-y_med);
    }
    cout << ansA + ansB << endl;
    return 0;
}