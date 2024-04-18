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
    int D,N;
    cin >> D >> N;
    vector<int> t(D+2,0);
    rep(i,N){
        int l,r;
        cin >> l >> r;
        t[l]++;
        t[r+1]--;
    }
    vector<int> sum(D+2,0);
    rep(i,D+1){
        sum[i] = sum[i-1] + t[i];
    }

    for(int i=1;i<=D;i++){
        cout << sum[i] << endl;
    }
    return 0;
}