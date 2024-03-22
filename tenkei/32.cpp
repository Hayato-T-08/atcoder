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
    vector<vector<int>> a(n+1,vector<int>(n+1));
    rep1(i,n){
        rep1(j,n){
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    vector<vector<bool>> ng(n+1,vector<bool>(n+1,false));
    rep1(i,m){
        int x,y;
        cin >> x >> y;
        ng[x][y] = true;
        ng[y][x] = true;
    }

    int ans = 1<<30;
    vector<int> P(n,0);
    rep(i,n) P[i] = i+1;
    do{
        int sum = 0;
        bool flag = true;
        rep(i,n-1){
            if(ng[P[i]][P[i+1]]) flag = false;
        }
        rep(i,n) sum += a[P[i]][i+1];

        if(flag) ans = min(ans,sum);
    }while(next_permutation(P.begin(),P.end()));
    if(ans == 1<<30) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}