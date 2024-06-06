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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector<ll> l,r;
    rep(i,n){
        if(i < n/2) l.push_back(a[i]);
        else r.push_back(a[i]);
    }
 
    vector<ll> sumL,sumR;

    rep(i,1 << l.size()){
        ll cnt = 0;
        rep(j,l.size()){
            if((1<<j) & i) cnt += l[j];
        }
        sumL.push_back(cnt);
    }

    rep(i,1<<r.size()){
        ll cnt = 0;
        rep(j,r.size()){
            if((1<<j) & i) cnt += r[j];
        }
        sumR.push_back(cnt);
    }
    sort(sumR.begin(),sumR.end());
    rep(i,sumL.size()){
        if(k - sumL[i] < 0) continue;
        auto it = lower_bound(sumR.begin(),sumR.end(), k - sumL[i]);
        if(*it == k - sumL[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" <<endl;
    return 0;
}