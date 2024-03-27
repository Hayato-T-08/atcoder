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
vector<vector<int>> p;
int max_same(vector<int> R){
    map<int,int> mp;
    int ans = 0;
    for(auto x:R){
        mp[x]++;
        ans = max(ans,mp[x]);
    }
    return ans;
}
int main() {
    cin >> h >> w;
    p.resize(h, vector<int>(w));
    int Answer = -1;
    rep(i,h)rep(j,w) cin >> p[i][j];
    rep(i,1<<h){
        vector<int> R;
        rep(j,w){
            int idx = -1;
            bool flag = false;
            rep(k,h){
                if((i & 1<<k) == 0) continue;
                if(idx == -1) idx = p[k][j];
                else if(idx != p[k][j]){
                    flag = true;
                }
            }
            if(!flag) R.push_back(idx);
        }

        int cntH = 0, cntW = max_same(R);
        rep(j,h){
            if((i & (1<<j)) != 0) cntH++;
        }
        Answer = max(Answer, cntH*cntW);
    }
    std::cout << Answer << std::endl;
    return 0;
}