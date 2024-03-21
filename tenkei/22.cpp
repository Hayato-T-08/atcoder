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

int main() {
    ll a,b,c;
    cin >> a >> b >> c;
    if(a == b && b == c){
        cout << 0 << endl;
        return 0;
    }
    
    ll r = gcd(a,gcd(b,c));
    cout << (a/r-1) + (b/r-1) + (c/r-1) << endl;
    return 0;
}