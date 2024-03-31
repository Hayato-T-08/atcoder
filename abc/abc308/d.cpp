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
int h,w;
vector<vector<char>> s;
vector<vector<bool>> seen;
string k = "snuke";
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
void dfs(int x, int y, int cnt){

    seen[x][y] = true;
    
    rep(i,4){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if(seen[nx][ny]) continue;
        if(s[nx][ny] != k[(cnt+1) % k.size()]) continue;

        dfs(nx,ny,cnt+1);
    }
}


int main() {
    cin >> h >> w;
    s.resize(h,vector<char>(w));
    seen.resize(h,vector<bool>(w,false));

    rep(i,h){
        rep(j,w){
            cin >> s[i][j];
        }
    }    
    if(s[0][0] != 's'){
        cout << "No" << endl;
        return 0;
    }
    dfs(0,0,0);
    if(seen[h-1][w-1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}