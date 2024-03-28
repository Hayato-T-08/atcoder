#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int ans=0;
    rep(i,n){
        int l,r;
        cin>>l>>r;
        ans+=r-l+1;
    }
    cout<<ans<<endl;
}