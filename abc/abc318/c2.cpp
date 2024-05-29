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
    //
    ll n,d,p;
    cin >> n >> d >> p;
    vector<ll> f(n);
    rep(i,n) cin >> f[i];

    sort(f.begin(),f.end());
    reverse(f.begin(),f.end());

    ll ans = 0;
    ll sum = 0;
    int cnt = 0;
    rep(i,n){
        sum += f[i];
        cnt++;
        if(cnt == d){
            if(sum >= p){
                ans += p;
                cnt = 0;
                sum = 0;
            }else{
                ans += sum;
                cnt = 0;
                sum = 0;
            }
        }
    }
    if(cnt != 0){
        if(sum >= p){
            ans += p;
        }else{
            ans += sum;
        }
    }
    cout << ans << endl;
    return 0;
}