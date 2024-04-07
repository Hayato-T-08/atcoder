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
int h,w,k;
vector<vector<char>> s;
vector<int> x,y;
int ans = inf;
int main() {
    cin >> h >> w >> k;
    s.resize(h+1,vector<char>(w+1,'#'));
    rep1(i,h) rep1(j,w) cin >> s[i][j];
    x.resize(w+1,0);
    y.resize(w+1,0);


    rep1(i,h){
        rep1(j,w){
            y[j] = y[j-1];
            x[j] = x[j-1];
            if(s[i][j] == '.'){
                y[j]++;
            }else if(s[i][j] == 'x'){
                x[j]++;
            }
        }
        for(int i=1;i+k-1 <=w;i ++){
            if(x[i+k-1]-x[i-1] == 0){
                ans = min(ans,y[i+k-1]-y[i-1]);
            }
        }
    }


    x.resize(h+1,0);
    y.resize(h+1,0);

    rep1(i,w){
        rep1(j,h){
            y[j] = y[j-1];
            x[j] = x[j-1];
            if(s[j][i] == '.'){
                y[j]++;
            }else if(s[j][i] == 'x'){
                x[j]++;
            }
        }
        for(int i=1;i+k-1 <=h;i ++){
            if(x[i+k-1]-x[i-1] == 0){
                ans = min(ans,y[i+k-1]-y[i-1]);
            }
        }
    }
    if(ans == inf) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}