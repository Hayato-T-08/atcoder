#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    ll maxv=-1;
    rep(i,n)rep(j,n){
        if(i==j) continue;
        maxv=max(maxv,abs(a[i]-a[j]));
    }

    cout<<maxv<<endl;
}