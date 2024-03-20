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
    int n;
    cin >> n;
    vector<int> x(n+1),y(n+1);
    rep1(i,n){
        rep1(j,n){
            int p;
            cin>>p;
            if(p != 0){
                x[i] = p;
                y[j] = p;
            }
        }
    }
    int ansx = 0,ansy = 0;
    rep1(i,n){
        for(int j = i;j<=n;j++){
            if(i == j) continue;
            if(x[i] > x[j] ) ansx++;
            if(y[i] > y[j] ) ansy++;
        }
    }

    cout << ansx + ansy << endl;
    return 0;
}