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
int main() {
    int n;
    cin >> n;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<int> num(n);
    iota(num.begin(),num.end(),0);

    auto f = [&](int i,int j){
        ull x = (a[i] + b[i])*a[j];
        ull y = (a[j] + b[j])*a[i];
        if(x == y) return i < j;
        return y > x;
    };
    sort(num.begin(),num.end(),f);
    rep(i,n) cout << num[i] + 1 <<" ";
    return 0;
}