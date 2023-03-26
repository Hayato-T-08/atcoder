#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    rep(i,n) cin>>p[i];
    sort(all(p));
    int ans=0;
    rep(i,k) ans+=p[i];
    cout<<ans<<endl;
}