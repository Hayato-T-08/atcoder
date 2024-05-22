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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    Graph G(n);
    rep(i,n){
        int a;
        cin >> a;
        a--;
        G[i].push_back(a);
    }
    vector<bool> seen(n,false);
    vector<int> ans;
    int idx = -1;
    auto f = [&](auto f, int v) -> void {
        seen[v] = true;
        ans.push_back(v+1);
        for(auto nv : G[v]){
            if(seen[nv]){
                idx = nv;
                continue;
            }
            f(f,nv);
        }
        seen[v] = false;
    };
    f(f,0);
    ans.clear();
    f(f,idx);
    cout << ans.size() << endl;
    for(auto a : ans){
        cout << a << " ";
    }
    return 0;
}