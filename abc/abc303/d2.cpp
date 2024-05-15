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

void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    string s;
    cin >> s;

    int n = s.size();
    vector<vector<ll>> dp(n+1,vector<ll>(2,linf));

    dp[0][0] = 0;
    rep(i,n)rep(c,2){//capslokがonかoffか
        rep(nc,2){//次のcapslokがonかoffか
            int cost = ((s[i] == 'A') == nc) ? x : y;
            //Aでcapslockがonならx, offならy
            //Aでcapslockがoffならy, onならx
            //aでcapslockがonならy, offならx
            //aでcapslockがoffならx, onならy
            if(c != nc) cost += z;//capslockのonoffが変わるときはz
            dp[i+1][nc] = min(dp[i+1][nc],dp[i][c]+cost);
        }
    }
    cout << min(dp[n][0],dp[n][1]) << endl;
    return 0;
}