#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    int ans=0;
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    rep3(i,1,1001){
         bool jug=true;
        rep(j,n){
       
        if(i<a[j]||i>b[j]) jug=false;
        
    }
    if(jug) ans++;
}
    cout<<ans<<endl;

}