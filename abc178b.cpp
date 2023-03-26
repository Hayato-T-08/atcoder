#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans;
    ans=max({a*c,b*d,a*d,b*c});

    cout<<ans<<endl;
}