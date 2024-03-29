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

int main() {
    vector<int> a(64);
    rep(i,64){
        int b;
        cin >> b;
        a[i] = b;
    }
    unsigned long long ans = 0;
    vector<unsigned long long> pow_2(64);
    pow_2[0] = 1;
    rep3(i,1,64){
        pow_2[i] = pow_2[i-1]*2;
    }
    rep(i,64){
        if(a[i] == 1){
            ans += pow_2[i];
        }
    }
    cout << ans << endl;
    return 0;
}