#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el endl
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
template <typename T>
void printVec(const std::vector<T>& array) {
    for (const auto& elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void print2DVec(const std::vector<std::vector<T>>& array) {
    for (const auto& row : array) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
         }
        std::cout << std::endl;
    }
}
// 4近傍、(一般的に)上右下左
//const int dy[4] = {-1,0,1,0};
//const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
//const int dy[8] = {-1,-1,-1,0,1,1,1,0};
//const int dx[8] = {-1,0,1,1,1,0,-1,-1};
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int r,c;
    cin >> r >> c;
    int sx,sy,gy,gx;
    cin >> sy >> sx >> gy >> gx;
    sx--,sy--,gy--,gx--;
    vector<string> s(r);
    rep(i,r) cin >> s[i];

    Graph g(r*c);
    vector<int> dist(r*c,-1);
    // (sx-1)*c + sy;
    rep(i,r){
        rep(j,c){
            if(s[i][j] == '#') continue;
            if(i+1<r && s[i+1][j] == '.'){
                g[i*c + j].push_back((i+1)*c+j);
                g[(i+1)*c+j].push_back(i*c+j);
            }
            if(j+1<c && s[i][j+1] == '.'){
                g[i*c + j].push_back((i*c + j + 1));
                g[i*c + j + 1].push_back(i*c+j);
            }
        }
    }

    queue<int> q;
    int start = sy*c + sx;
    int goal = gy*c + gx;
    q.push(start);
    dist[start] = 0;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(auto nex : g[now]){
            if(dist[nex] != -1) continue;
            dist[nex] = dist[now] + 1;
            q.push(nex);
        }
    }

    cout << dist[goal] << endl;
    return 0;
}