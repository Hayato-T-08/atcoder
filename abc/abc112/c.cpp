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
    int n;
    cin >> n;
    vector<int> x(n),y(n),h(n);
    rep(i,n) cin >> x[i] >> y[i] >> h[i];
    rep(cx,101)rep(cy,101){
        bool flag = true;
        int H = 1;
        rep(i,n) if(h[i] > 0) H = h[i] + abs(x[i] - cx) + abs(y[i] - cy);
        rep(i,n) if(h[i] != max(H - abs(x[i] - cx) - abs(y[i] - cy),0)) flag = false;
        if(flag){
            cout << cx << " " << cy << " " << H << endl;
            return 0;
        }
    }
    return 0;
}