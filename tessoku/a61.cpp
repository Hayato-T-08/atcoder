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
    int n,m;
    cin >> n >> m;
    Graph G(n + 1);
    rep1(i,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    rep1(i,n){
        cout<<i<<": ";
        if(G[i].size() == 1) cout<<"{"<<G[i][0]<<"}";
        else{
            cout<<"{";
            rep(j,G[i].size()){
                cout<<G[i][j];
                if(j != G[i].size() - 1) cout<<", ";
            }
            cout<<"}";
        }
        cout << endl;
    }
    
    return 0;
}