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
vector<vector<int>> a;
int h,w;
int main() {
    cin >> h >> w;
    a.assign(h+1,vector<int>(w+1,0));
    rep1(i,h){
        rep1(j,w){
            cin >> a[i][j];
        }
    }
    vector<int> sumx(h+1,0),sumy(w+1,0);
    rep1(i,h){
        rep1(j,w){
            sumx[i] += a[i][j];
            sumy[j] += a[i][j];
        }
    }

    rep1(i,h){
        rep1(j,w){
            cout << sumx[i] + sumy[j] - a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}