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
ll n;
ll fl(ll x){
    return (x + 1)/2;
}
ll fr(ll x){
    return x/2;
}
map<ll, ll> memo;
unsigned long long  sum = 0;
ll f(ll n){
    if(n == 1){
        return 0;
    }
    if(memo[n] != 0){
        return memo[n];
    }
    return memo[n] = f(fl(n)) + f(fr(n)) + n;
}
int main() {
    cin >> n;
    cout << f(n) << endl;
    return 0;

}