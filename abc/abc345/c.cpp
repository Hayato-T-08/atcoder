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
ll c2(ll n){
    return n*(n-1)/2;
}
int main() {
    string s;
    cin >> s;
    int n = s.size();
    ll same = 0;
    map<char ,int> cnt;
    for(char c:s) cnt[c]++;
    for(auto p:cnt){
        same += c2(p.second);
    }

    ll diff = c2(n) - same;
    ll ans = diff;
    if(same) ans++;
    cout << ans << endl;
    return 0;
}