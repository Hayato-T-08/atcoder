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
    string s;
    cin >> s;
    vector<int> ret1(n+1,1),ret2(n+1,1);

    rep(i,n-1){
        if(s[i] == 'A'){
            ret1[i+1] = ret1[i]+1;
        }
    }

    for(int i = n-2; i>=0;i--){
        if(s[i] == 'B'){
            ret2[i] = ret2[i+1]+1;
        }
    }
    ll ans = 0;
    rep(i,n){
        ans += max(ret1[i],ret2[i]);
    }

    cout<<ans<<endl;
    return 0;
}