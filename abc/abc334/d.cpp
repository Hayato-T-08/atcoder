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
    int n,q;
    cin >> n >> q;
    vector<ll> r(n),sum(n);
    rep(i,n) cin >> r[i];
    sort(r.begin(),r.end());
    sum[0] = r[0];
    rep3(i,1,n){
        sum[i] = sum[i-1] + r[i];
    }
    
    vector<ll> query(q);   
    rep(i,q){
        cin >> query[i];
    } 

    rep(i,q){
        ll ans = upper_bound(sum.begin(),sum.end(),query[i]) - sum.begin();
        cout << ans << endl;
    }
    return 0;
}