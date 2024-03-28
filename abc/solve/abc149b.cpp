#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll a,b,k;
    cin>>a>>b>>k;
    ll eat=min(a,k);
    a-=eat;
    k-=eat;
    ll eat2=min(b,k);
    b-=eat2;
    k-=eat2;
    cout<<a<<" "<<b<<endl;
}