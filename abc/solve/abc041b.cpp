#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    a%=ll(1e9+7);
    b%=ll(1e9+7);
    c%=ll(1e9+7);
    if(a<0) a+=ll(1e9+7);
    if(b<0) b+=ll(1e9+7);
    if(c<0) c+=ll(1e9+7);
    ll ans = a*b;
    ans%=ll(1e9+7);
    if(ans<0) ans+=ll(1e9+7);
    ans*=c;
    ans%=ll(1e9+7);
    if(ans<0) ans+=ll(1e9+7);
    cout<<ans<<endl;
}