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
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll>> ab(n);
    rep(i,n){
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.begin(),ab.end());
    ll ans = 0;
    rep(i,n) ans += ab[i].second;
    if(ans <= k){
        cout << 1 << endl;
        return 0;
    }
    rep(i,n){
        ans -= ab[i].second;
        if(ans <= k){
            cout << ab[i].first + 1 << endl;
            return 0;
        }
    }
    return 0;
}