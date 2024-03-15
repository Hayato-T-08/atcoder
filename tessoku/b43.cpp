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
    int n,m;
    cin >> n >> m;
    vector<int> a(m+1);
    rep1(i,m){
        cin >> a[i];
    }

    vector<int> cnt(n+1,0);
    rep1(i,m){
        cnt[a[i]]++;
    }

    rep1(i,n){
        cout<< m - cnt[i] << endl;
    }
    return 0;
}