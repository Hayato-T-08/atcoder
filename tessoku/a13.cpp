#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    ll ans = 0;
    rep(i,n){
        auto it = lower_bound(all(a),a[i]+k + 1);
        ans += distance(begin(a),it) - i -1; 
    }

    cout << ans << endl;
}