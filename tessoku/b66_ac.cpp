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
        if(a == 1){
            cin >> b;
            query[i].push_back(a);
            query[i].push_back(b);
        }
        else{
            cin >> b >> c;
            query[i].push_back(a);
            query[i].push_back(b);
            query[i].push_back(c);
        }
    }
    dsu uf(n+1);
    vector<string> ans;
    vector<bool> is_cancel(m+1,false);
    rep(i,q){
        if(query[i][0] == 1){
            is_cancel[query[i][1]] = true;
        }
    }

    rep1(i,m){
        if(!is_cancel[i] && !uf.same(a[i],b[i])){
            uf.merge(a[i],b[i]);
        }
    }

    reverse(query.begin(),query.end());
    rep(i,q){
        if(query[i][0] == 1){
            int idx = query[i][1];
            uf.merge(a[idx],b[idx]);
        }else{
            int x = query[i][1];
            int y = query[i][2];
            if(uf.same(x,y)){
                ans.push_back("Yes");
            }else{
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