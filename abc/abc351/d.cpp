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
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int h, w;
vector<string> s;
vector<int> seen;
bool check(int x, int y, vector<string> &s){
    if(x < 0 || x >= h || y < 0 || y >= w) return false;
    if(s[x][y] == '#') return false;
        rep(i,4){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if(s[nx][ny] == '#'){
            return false;
        }
    }
    return true;
}
void dfs(int x, int y, int curx,int cury, vector<vector<int>> &d){
    if(seen[curx*w+cury] != -1) return;
    seen[curx*w+cury] = x*w+y;
    d[x][y]++;
    if(check(curx, cury, s) == false) return;
    rep(i,4){
        int nx = curx + dx[i];
        int ny = cury + dy[i];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        dfs(x, y, nx, ny, d);
    }
    
}
int main() {
    cin >> h >> w;
    s.resize(h);
    seen.resize(h*w, -1);
    rep(i,h) cin >> s[i];
    vector<vector<int>> d(h, vector<int>(w, 0));
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#') d[i][j] = -1;
        }
    }
    rep(i,h){
        rep(j,w){
            if(d[i][j] == -1) continue;
            dfs(i, j, i, j, d);
        }
    }
    // rep(i,h){
    //     rep(j,w) cout << d[i][j] << " ";
    //     cout << endl;
    // }
    int ans = 1;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#') continue;
            chmax(ans, d[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}