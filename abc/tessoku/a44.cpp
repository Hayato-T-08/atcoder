#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    iota(all(a),1);
    bool is_r = false;
    rep(i,q){
        int m;
        cin >> m;
        if(m==1){
            int x,y;
            cin >> x >> y;
            x--;
            if(is_r) a[n-1 -x] = y;
            else a[x] = y;
        }else if(m==2){
            is_r = !is_r;
        }else{
            int x;
            cin >> x;
            x--;
            cout << (is_r ? a[n-1-x] : a[x]) << endl;
        }
    }

    return 0;
}