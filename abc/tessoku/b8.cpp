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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n;
    cin >> n;
    vector grid(1501,vector<int> (1501));
    rep(i,n){
        int x,y;
        cin >> x >> y;
        grid[x][y]++;
    }

    vector sum(1501,vector<int> (1501));

    rep1(i,1500){
        rep1(j,1500){
            sum[i][j] = sum[i-1][j] + grid[i][j];
        }
    }

    rep1(i,1500){
        rep1(j,1500){
            sum[i][j] += sum[i][j-1];
        }
    }

    int q;
    cin >> q;
    rep(i,q){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << sum[c][d] - sum[a-1][d] - sum[c][b-1] + sum[a-1][b-1] << endl;
    }
    return 0;
}