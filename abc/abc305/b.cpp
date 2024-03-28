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
    vector<int> dis = {0,3,4,8,9,14,23};
    char p,q;
    cin >> p >> q;
    if(p-'A'>q-'A'){
        swap(p,q);
    }

    int idx_p = int(p)-'A';
    int idx_q = int(q)-'A';

    cout << dis[idx_q]-dis[idx_p] << endl;
    return 0;
}