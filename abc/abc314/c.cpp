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
    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s;
    t = s;
    vector<deque<int>> g(m),h(m);

    rep(i,n){
        int c;
        cin >> c;
        g[c-1].push_back(i);
    } 
    h = g;
    rep(i,m){
        int back = g[i].back();
        g[i].pop_back();
        g[i].push_front(back);
    }
    rep(i,m){
        rep(j,g[i].size()){
            t[h[i][j]] = s[g[i][j]];
        }
    }
    cout << t << endl;
    return 0;
}