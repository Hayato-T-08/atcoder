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

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(1001,vector<int>(1001,0));
    rep(i,n){
        int lx,ly,rx,ry;
        cin >> lx >> ly >> rx >> ry;
        grid[lx][ly]++;
        grid[rx][ry]++;
        grid[lx][ry]--;
        grid[rx][ly]--;
    }
    rep(i,1001){
        rep(j,1000){
            grid[i][j+1] += grid[i][j];
        }
    }

    rep(j,1001){
        rep(i,1000){
            grid[i+1][j] += grid[i][j];
        }
    }
    vector<int> cnt(n+1,0);
    rep(i,1001){
        rep(j,1001){
            cnt[grid[i][j]]++;
        }
    }

    rep1(i,n){
        cout << cnt[i] << endl;
    }
    return 0;
}