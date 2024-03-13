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
    int n,h,w;
    cin>> n >> h >> w;
    vector<int> a(n+1),b(n+1);
    rep1(i,n){
        cin>> a[i] >> b[i];
    }
    int ans = 0;   
    rep1(i,n){
        ans ^= (a[i]-1);
    }

    rep1(i,n){
        ans ^= (b[i]-1);
    }

    if(ans == 0) cout << "Second" << endl;
    else cout << "First" << endl;
}