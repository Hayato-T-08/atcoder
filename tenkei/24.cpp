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
    int n,k;
    cin >> n >> k;
    vector<ll> a(n+1,0),b(n+1,0);
    rep1(i,n){
        cin >> a[i];
    }

    rep1(i,n){
        cin >> b[i];
    }

    ll sum = 0;
    rep1(i,n){
        sum += abs(a[i]-b[i]);
    }

    if(sum > k){
        cout << "No" << endl;
    }
    else if((k-sum)%2 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}