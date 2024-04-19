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
    ll n,m,k;
    cin >> n >> m >> k;
    ll lcm = n*m/__gcd(n,m);
    ll left = -1;
    ll right = linf;
    while(right - left > 1){
        ll mid = (left + right) / 2;
        ll cnt = mid/n + mid/m - 2*(mid/lcm);
        if(cnt >= k) right = mid;
        else left = mid;
    }
    cout << right << endl;
}