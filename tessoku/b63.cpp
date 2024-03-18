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
    int r,c;
    cin >> r >> c;
    vector<vector<char>> G(r+1,vector<char>(c+1));
    int sy,sx,gy,gx;
    cin >> sy >> sx >> gy >> gx;
    rep1(i,r){
        rep1(j,c){
            cin >> G[i][j];
        }
    }
    queue<P> que;
    vector<vector<int>> dist(r+1,vector<int>(c+1,-1));
    que.push({sy,sx});
    dist[sy][sx] = 0;
    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();
        if(y == gy && x == gx) break;
        int dy[4] = {1,0,-1,0};
        int dx[4] = {0,1,0,-1};
        rep(i,4){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 1 || ny > r || nx < 1 || nx > c) continue;
            if(G[ny][nx] == '#') continue;
            if(dist[ny][nx] != -1) continue;
            dist[ny][nx] = dist[y][x] + 1;
            que.push({ny,nx});
        }
    }
    cout << dist[gy][gx] << endl;

    return 0;
}