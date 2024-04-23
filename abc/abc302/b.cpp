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
string t = "snuke";
int h,w;
vector<string> s;
vector<P> ans;
int dx[8] = {1,-1,-1,1,0,1,0,-1};
int dy[8] = {1,-1,1,-1,1,0,-1,0};
bool search(int i,int j){
    if(s[i][j] != 's') return false;
    
    rep(k,8){
        P cur = {i,j};
        ans.push_back({i,j});
        for(int k2 = 1; k2<=4;k2++){
            int ni = cur.first + dx[k];
            int nj = cur.second + dy[k];
            cur = {ni,nj};
            if(ni < 0 || ni >= h || nj < 0 || nj >= w){
                ans.clear();
                break;
            }
            if(s[ni][nj] == t[k2]){
                ans.push_back({ni,nj});
                if(k2 == 4) return true;
            }
            if(s[ni][nj] != t[k2]){
                ans.clear();
                break;
            }
        }
    }
    ans.clear();
    return false;
}

int main() {
    cin >> h >> w;
    s.resize(h);
    rep(i,h) cin >> s[i];
    rep(i,h){
        rep(j,w){
            if(search(i,j)){
                rep(k,5){
                    cout << ans[k].first+1 << " " << ans[k].second+1 << endl;
                }

                return 0;
            }
        }
    }
    return 0;
}