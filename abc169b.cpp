#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    ll ans;
    vector<ll> num(n);
    
    rep(i,n) cin>>num[i];
    sort(all(num));
            if(num[0]==0){
            cout<<0<<endl;
            return 0;
        }
    rep(i,n){
        ll a=num[i];

        
        if(i==0){ 
            
            ans=a;
            continue;
            }
        if(ans*a>ll(1e18)) {
            cout<<-1<<endl;
            return 0;
        }
        ans*=a;
    }
    cout<<ans<<endl;
    return 0;
}