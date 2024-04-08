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
vector<vector<char>> s;
int h,w,n;
string t;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool dfs(int i, int j){
    if(s[i][j] == '#') return false;
    int x = i,y=j;
    rep(k,n){
        if(t[k] == 'L'){
            x += dx[3];
            y += dy[3];
        }else if(t[k] == 'R'){
            x += dx[1];
            y += dy[1];
        }else if(t[k] == 'U'){
            x += dx[2];
            y += dy[2];
        }else if(t[k] == 'D'){
            x += dx[0];
            y += dy[0];
        }
        if(x < 0 || x >= h || y < 0 || y >= w) return false;
        if(s[x][y] == '#') return false;
    }
    return true;
}

int main() {
    cin >> h >> w >> n;
    cin >> t;
    s.resize(h);
    rep(i,h){
        s[i].resize(w);
        rep(j,w){
            cin >> s[i][j];
        }
    }
    ll ans = 0;
    rep(i,h){
        rep(j,w){
            if(dfs(i,j)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}