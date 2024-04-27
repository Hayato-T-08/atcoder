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
vector<vector<bool>> seen;


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

int main() {
    cin >> h >> w;
    s.resize(h);
    rep(i,h) cin >> s[i];
    scc_graph g(h*w);
    seen.assign(h, vector<bool>(w, false));
    rep(i,h){
        rep(j,w){
            seen[i][j] = check(i, j, s);
        }
    }
    rep(i,h){
        rep(j,w){
            if(!seen[i][j]) continue;
            rep(k,4){
                int nx = i + dx[k];
                int ny = j + dy[k];
                if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if(!seen[nx][ny]) continue;
                g.add_edge(i*w+j, nx*w+ny);
                g.add_edge(nx*w+ny, i*w+j);
            }
        }
    }
    auto scc = g.scc();
    int ans = 1;
    int idx = -1;
    
    rep(i,scc.size()){
        if((int)scc[i].size() > ans){
            idx = i;
            ans = scc[i].size();

        }
    }

    for(int v : scc[idx]){
        int x = v / w;
        int y = v % w;
        rep(i,4){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if(s[nx][ny] == '#') continue;
        if(s[nx][ny] == '.' and seen[nx][ny] == false){
            seen[nx][ny] = true;
            ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}