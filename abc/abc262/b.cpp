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
    vector<vector<int>> g(n,vector<int>(n,0));
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        g[a][b] = 1;
        g[b][a] = 1;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(g[i][j] == 1 && g[j][k] == 1 && g[k][i] == 1){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}