#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n-1);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    rep(i,n-1) cin>>c[i];
    int ans=0;
    rep(i,n){
        ans+=b[a[i]-1];
        if(i!=n-1 and a[i+1]==a[i]+1){
            ans+=c[a[i]-1];
        }
    }
    cout<<ans<<endl;


}