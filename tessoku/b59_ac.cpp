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
int op(int a, int b) { return a+b; }
int e() { return 0; }
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    segtree<int, op, e> seg(n);
    ll ans = 0;
    rep(i,n){
        ans +=  seg.prod(a[i],n);
        seg.set(a[i] -1 ,1);
    }
    cout << ans << endl;
    return 0;
}