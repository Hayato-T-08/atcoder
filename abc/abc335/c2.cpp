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
    deque<P> xy;
    rep(i,n) xy.emplace_back(i+1,0);
    rep(i,q){
        int t;
        cin >> t;
        if(t == 1){
            char C;
            cin >> C;
            xy.pop_back();
            if(C == 'R') xy.push_front(make_pair(xy.front().first+1,xy.front().second));
            if(C == 'L') xy.push_front(make_pair(xy.front().first-1,xy.front().second));
            if(C == 'U') xy.push_front(make_pair(xy.front().first,xy.front().second+1));
            if(C == 'D') xy.push_front(make_pair(xy.front().first,xy.front().second-1));
        }
        else{
            int p;
            cin >> p;
            cout << xy[p-1].first << " " << xy[p-1].second << endl;
        }
    }
    return 0;
}