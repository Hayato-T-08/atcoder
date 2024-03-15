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
    ll n,l;
    cin >> n >> l;
    vector<ll> a(n+1);
    vector<char> b(n+1);
    rep1(i,n){
        cin >> a[i] >> b[i];
    }

    ll ans = -1;
    rep1(i,n){
        if(b[i] == 'E'){
            ans = max(ans, l-a[i]);
        }else{
            ans = max(ans, a[i]);
        }
    }

    cout << ans << endl;
    return 0;
}