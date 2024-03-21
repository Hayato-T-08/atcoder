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
    int n,p,q;
    cin >> n >> p >> q;
    vector<int> a(n+1);
    rep1(i,n) cin >> a[i];
    rep1(i,n) a[i] %= p;
    int ans = 0;
    rep1(i,n){
        rep3(j,i+1,n+1){
            rep3(k,j+1,n+1){
                rep3(l,k+1,n+1){
                    rep3(m,l+1,n+1){
                        if((ll)a[i]*a[j]%p*a[k]%p*a[l]%p*a[m]%p == q){
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}