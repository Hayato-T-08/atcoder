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
    int n;
    cin >> n;
    vector<ll> a(101,0);
    rep1(i,n){
        int x;
        cin >> x;
        a[x]++;
    }

    ll ans = 0;
    rep1(i,100){
        ans += a[i] * (a[i] -1) * (a[i] - 2) / 6;
    }

    cout << ans << endl;
    return 0;
}