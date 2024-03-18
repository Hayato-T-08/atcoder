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
class SegmentTree {
    public:
    vector<int> dat;
    int siz = 1;

    void init(int n){
        siz = 1;
        while(siz < n) siz *= 2;
        dat.resize(2 * siz, 0);
    }    

    void update(int pos, int x){
        pos = pos + siz -1;
        dat[pos] = x;
        while(pos >= 2){
            pos /= 2;
            dat[pos] = max(dat[pos * 2], dat[pos * 2 + 1]);
        }
    }

    int query(int l, int r, int a, int b, int u){
        if(r <= a || b <= l) return -10000000;
        if(l <= a && b <= r) return dat[u];
        int m = (a + b)/2;
        int ansl = query(l,r,a,m,u*2);
        int ansr = query(l,r,m,b,u*2+1);
        return max(ansl,ansr);
    }
};
int main() {
    int n,q;
    cin >> n >> q;
    SegmentTree seg;
    seg.init(n);
    rep(i,q){
        int query,l,r;
        cin >> query >> l >> r;
        if(query == 1){
            seg.update(l,r);
        }
        else{
            cout << seg.query(l,r,1,seg.siz+1,1) << endl;
        }   
    }
    return 0;
}