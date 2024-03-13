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
    vector<int> a(n);
    vector<char> t(n);
    ll ans=0;
    rep(i,n){
        cin>>t[i];
        cin>>a[i];
    }

    rep(i,n){
        if(t[i] == '+'){
            ans += a[i];
        }
        else if(t[i] == '-'){
            ans -= a[i];
        }
        else{
            ans *= a[i];
        }
        if(ans<0){
            ans += 10000;
        }
        ans = ans%10000;
        cout<<ans<<endl;
    }


    return 0;
}