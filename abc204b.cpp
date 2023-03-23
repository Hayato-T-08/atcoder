#include <bits/stdc++.h>
using namespace std;
#define ALL(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int ans=0;
    rep(i,n){
        if(a[i]>10) ans+=a[i]-10;
    }
    cout<<ans<<endl;
}