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
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> G(n,vector<int>(n,0));
    rep(i,m){
        vector<int> a(n);
        rep(j,n){
            cin >> a[j];
            a[j]--;
        }
        rep(j,n-1){
            G[a[j]][a[j+1]] = 1;
            G[a[j+1]][a[j]] = 1;
        }
    }
    int ans = 0;
    rep(i,n){
        rep(j,n){
            if(i == j) continue;
            if(G[i][j] == 0) ans++;
        }
    }
    cout << ans/2 << endl;
    return 0;
}