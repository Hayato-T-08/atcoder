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
    ll a,b;
    cin >> a >> b;
    // vector<int> bit;
    // ll tmp = b;
    // while(tmp != 0){
    //     bit.push_back(tmp%2);
    //     tmp/=2;
    // }
    // ll ans = 1;
    // ll pow = a;
    // int n = bit.size();
    // rep(i,n){

    //     if(bit[i] == 1) ans*=pow;
    //     ans%=mod;
    //     pow*=pow;
    //     pow%=mod;
    // }
    // cout << ans <<endl;
    ll ans = 1,pow=a;
    rep(i,30){
        if((1<<i)&b) ans*=pow;
        ans%=mod;
        pow*=pow;
        pow%=mod;
    }
    cout << ans << endl;
    return 0;
}