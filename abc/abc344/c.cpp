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
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    int m;
    cin >> m;
    vector<ll> b(m);
    rep(i,m) cin >> b[i];
    int l;
    cin >> l;
    vector<ll> c(l);
    rep(i,l) cin >> c[i];
    int q;
    cin >> q;
    set<ll> sumab;
    rep(i,n){
        rep(j,m){
            sumab.insert(a[i]+b[j]);
        }
    }

    rep(i,q){
        int x;
        cin >> x;
        rep(i,l){
            if(sumab.count(x-c[i])){
                cout << "Yes" << endl;
                break;
            }
            if(i == l-1){
                cout << "No" << endl;
            }
        }
    }
    return 0;
}