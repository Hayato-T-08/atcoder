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

bool check(ll x, vector<ll> l, ll m){
    int row = 0;
    ll rem = 0;
    rep(i,l.size()){
        if(rem >= l[i] + 1){
            rem -= l[i] + 1;
        }else{
            row++;
            rem = x - l[i];
            if(rem < 0) return false;
        }
    }
    return row <= m;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<ll> l(n);
    rep(i,n) cin >> l[i];
    ll left = -1;
    ll right = 1e18;
    while(right - left > 1){
        ll mid = left + (right - left) / 2;
        if(check(mid, l, m)){
            right = mid;
        }else{
            left = mid;
        }
    }
    cout << right << endl;
    return 0;
}