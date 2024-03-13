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
ll power(ll a, ll b, ll m){
    ll p = a,ans = 1;
    for(int i=0;i<30;i++){
        int wari = (1<<i);
        if((b/wari)%2 == 1){
            ans = (ans * p) % m;
        }
        p = (p * p) % m;
    }

    return ans;
}

ll div(ll a, ll b, ll m){
    return (a * power(b,m-2,m)) % m;
}
int main() {
    int n,r;
    cin>> n >> r;
    ll a=1,b=1;
    ll M = 1000000007;
    rep1(i,n){
        a = (a * i) % M;
    }

    rep1(i,r){
        b = (b * i) % M;
    }

    rep1(i,n-r){
        b = (b * i) % M;
    }

    cout << div(a,b, M) <<endl;
    return 0;
}