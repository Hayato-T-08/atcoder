#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n,m;
    cin>>n>>m;

    ll ans=2e18;
    for(ll i=1;i<=n;i++){
        ll r=(m+i-1)/i;
        
    if(r>=1 and r<=n)    {        
            ans=min(ans,i*r);
        }
        if(i>r) break;;
    }
    if(ans==2e18) cout<<-1<<endl;
    else cout<<ans<<endl;
}