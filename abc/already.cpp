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
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n,0));
    int cur = 0;
    int x = 0,y = 0;
    rep(i,n*n){
        a[x][y] = i+1;
        int nx,ny;
        nx = x + dx[cur];
        ny = y + dy[cur];
        if(nx < 0 || nx >= n || ny < 0 || ny >= n || a[nx][ny] != 0){
            cur = (cur+1)%4;
            nx = x + dx[cur];
            ny = y + dy[cur];
        }

        x = nx;
        y = ny;

    }
        
    rep(i,n){
        rep(j,n){
            if(a[i][j] == n*n) cout << "T ";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}