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
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n+1,vector<int>(n+1));
    vector<int> status(n+1,0);
    rep1(i,n){
        status[i] = i;
    }
    rep1(i,n){
        rep1(j,n){
            cin >> a[i][j];
        }
    }
    ll q;
    cin >> q;
    rep1(i,q){
        ll query,x,y;
        cin >> query;
        if(query == 1){
            cin >> x >> y;
            swap(status[x],status[y]);
        }else{
            cin >> x >> y;
            cout<<a[status[x]][y]<<endl;
        }
    }
    return 0;
}