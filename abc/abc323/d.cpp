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
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n;
    map<ll,ll> cnt;
    cin >> n;
    rep(i,n){
        ll s,c;
        cin >> s >> c;
        cnt[s] = c;
    }
    for(auto x:cnt){
        if(x.second == 1) continue;
        cnt[x.first * 2] += x.second/2;
        cnt[x.first] = x.second%2;
        if(cnt[x.first]  == 0) cnt.erase(x.first);
    }

    cout << cnt.size() << endl;
    return 0;
}