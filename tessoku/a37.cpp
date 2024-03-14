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
int main() {
    ll n,m,b;
    cin>> n >> m >> b;

    vector<ll> a(n+1),c(m+1);
    rep1(i,n){
        cin >> a[i];
    }

    rep1(i,m){
        cin >> c[i];
    }
    ll ans = 0;
    ans += n*m*b;
    rep1(i,n){
        ans += a[i]*m;
    }

    rep1(i,m){
        ans += c[i]*n;
    }

    cout << ans << endl;
    return 0;
}