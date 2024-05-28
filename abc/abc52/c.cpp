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
    map<int, int> mp;
    auto f = [&](int x){
        int rem = x;
        for(int i = 2; i*i <= x; i++){
            while(rem % i == 0){
                mp[i]++;
                rem /= i;
            }
        }
        if(rem != 1) mp[rem]++;
    };
    rep3(i,2,n+1){
        if(i == 2 || i == 3 || i == 5 || i == 7) mp[i]++;
        else
        f(i);
    }
    ll ans = 1;
    for(auto p : mp){

        ans *= p.second+1;
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}