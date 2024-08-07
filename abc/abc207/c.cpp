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
    vector<int> t(n),l(n),r(n);
    rep(i,n) cin >> t[i] >> l[i] >> r[i];
    int ans = 0;
    auto f = [&](int i, int j) -> bool {
        bool res = true;
        int l1 = l[i], r1 = r[i], l2 = l[j], r2 = r[j];
        bool li = (t[i] == 3 || t[i] == 4), lj = (t[j] == 3 || t[j] == 4), ri = (t[i] == 2 || t[i] == 4), rj = (t[j] == 2 || t[j] == 4);
        if(lj or ri) res &= (l2 < r1);
        else res &= (l2 <= r1);
        if(li or rj) res &= (l1 < r2);
        else res &= (l1 <= r2);
        return res;
    };
    rep(i,n){
        rep3(j,i+1,n){
            if(f(i,j)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}