#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    ll ans=1;
    rep(i,n){
        ans*=(i+1);
        ans%=(ll(1e9)+7);
        if(ans<0) ans+=(ll(1e9)+7);
    }
    cout<<ans<<endl;


}