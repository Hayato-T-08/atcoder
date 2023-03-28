#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n;
    ll a,b;
    cin>>n>>a>>b;
    ll len=a+b;
    ll ans=(n/len) * a + min(a,n%len);
    cout<<ans<<endl;
}