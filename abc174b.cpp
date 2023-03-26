#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    ll d;
    cin>>d;
    int ans=0;
    rep(i,n){
        ll x,y;
        cin>>x>>y;
        if(ll(x*x+y*y<=ll(d*d)))ans++;
    }
    cout<<ans<<endl;
}