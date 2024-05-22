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

vector<int> compress(vector<int> &a, int n){
    map<int,int> mp;
    rep(i,n) mp[a[i]] = 0;
    int id = 1;
    for(auto &p : mp) p.second = id++;
    vector<int> res(n);
    rep(i,n) res[i] = mp[a[i]];
    return res;
}

int main() {
    int h,w,n;
    cin >> h >> w >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    a = compress(a,n);
    b = compress(b,n);
    rep(i,n) cout << a[i] << " " << b[i] << endl;
    return 0;
}