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
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(m+1),b(m+1);
    rep1(i,m){
        cin >> a[i] >> b[i];
    }
    int q;
    cin >> q;
    vector<vector<int>> query(q);
    rep(i,q){
        int a,b,c;
        cin >> a;
        query[i].push_back(a);
        if(a == 1){
            cin >> b;
            query[i].push_back(b);
        }
        else{
            cin >> b;
            query[i].push_back(b);
            cin >> c;
            query[i].push_back(c);
        }
    }
    vector<bool> is_cancel(n+1,false);
    rep(i,q){
        if(query[i][0] == 1){
            is_cancel[query[i][1]] = true;
        }
    }
    UnionFind uf;
    uf.init(n);
    rep1(i,m){
        if(!is_cancel[i] && !uf.same(a[i],b[i])){
            uf.unite(a[i],b[i]);
        }
    }
   
    reverse(query.begin(),query.end());
    vector<string> ans;
    for(auto v : query){
        if(v[0] == 1){
            int idx = v[1];
            uf.unite(a[idx],b[idx]);
        }
        else{
            if(uf.same(v[1],v[2])){
                ans.push_back("Yes");
            }
            else{
                ans.push_back("No");
            }
        }
    }

    reverse(ans.begin(),ans.end());
    for(auto s : ans){
        cout << s << endl;
    }
    return 0;
}