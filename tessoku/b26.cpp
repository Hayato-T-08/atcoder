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
    vector<bool> deleted(n+1, false);
    rep3(i,2,sqrt(n) + 1){
        for(int j=i*2;j<=n;j+=i){
            deleted[j] = true;
        }
    }

    rep3(i,2,n+1){
        if(!deleted[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}