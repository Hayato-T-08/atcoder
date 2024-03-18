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

    vector<int> num(n+1);
    rep1(i,n){
        num[i] = G[i].size();
    }

    int max = -1;
    int idx = -1;
    rep1(i,n){
        if(num[i] > max){
            idx = i;
            max = num[i];
        }
    }
    cout << idx << endl;
    return 0;
}