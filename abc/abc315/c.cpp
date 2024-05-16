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
    vector<vector<int>> g(n);
    rep(i,n){
        int f,s;
        cin >> f >> s;
        f--;
        g[f].push_back(s);
    }
    vector<ll> ans;
    rep(i,n){
        sort(g[i].begin(),g[i].end(),greater<int>());
        if(g[i].size() != 0) ans.push_back(g[i][0]);
    }
    sort(ans.begin(),ans.end(),greater<int>());
    ll max = ans[0] + ans[1];
    rep(i,n){
        if(g[i].size() < 2) continue;
        ll tmp = g[i][0]+g[i][1]/2;
        if(tmp >= max){
            max = tmp;
        }
    }
    cout << max << endl;
    return 0;
}