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
    int n,q;
    cin >> n >> q;
    vector<P> xy;
    vector<P> ans;
    xy.emplace_back(1,0);
    int time = 0;
    rep(i,q){
        int t;
        cin >> t;
        if(t == 1){
            char C;
            cin >> C;
            time++;
            if(C == 'R') xy.emplace_back(xy[time-1].first+1,xy[time-1].second);
            if(C == 'L') xy.emplace_back(xy[time-1].first-1,xy[time-1].second);
            if(C == 'U') xy.emplace_back(xy[time-1].first,xy[time-1].second+1);
            if(C == 'D') xy.emplace_back(xy[time-1].first,xy[time-1].second-1);
        }else{
            int p;
            cin >> p;
            if(p - time > 0) ans.emplace_back(p-time,0);
            else{
                ans.emplace_back(xy[time-p + 1].first,xy[time-p + 1].second);
            }
        }
    }

    cout << endl;
    for(auto x: ans){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}