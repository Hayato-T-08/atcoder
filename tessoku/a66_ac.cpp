#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9 + 7;
const ll linf = 1e18;
class UnionFind{
    public:
        vector<int> par;
        vector<int> size;

        void init(int n){
            par.resize(n+1,-1);
            size.resize(n+1,1);
        }

        int root(int x){
            while(true){
                if(par[x] == -1) break;
                x = par[x];
            }
            return x;
        }

        void unite(int u,int v){
            int RootU = root(u);
            int RootV = root(v);
            if(RootU == RootV) return;
            if(size[RootU] < size[RootV]){
                par[RootU] = RootV;
                size[RootV] += size[RootU];
            }
            else{
                par[RootV] = RootU;
                size[RootU] += size[RootV];
            }
        }

        bool same(int u,int v){
            return root(u) == root(v);
        }
};
int main()
{
    int n, q;
    cin >> n >> q;
    dsu uf(n);
    rep(i, q)
    {
        int query, a, b;
        cin >> query >> a >> b;
        a--;
        b--;
        if (query == 1)
        {
            uf.merge(a, b);
        }
        else
        {
            if (uf.same(a, b))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}