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
int op(int a, int b) { return max(a, b); }
int e() { return 0; }
int main() {
    int n,q;
    cin >> n >> q;
    segtree<int, op, e> seg(n+1);
    rep(i,q){
        int query,l,r;
        cin >> query >> l >> r;
        if(query == 1){
            seg.set(l,r);
        }
        else{
            cout << seg.prod(l,r) << endl;
        }
    }
    return 0;
}