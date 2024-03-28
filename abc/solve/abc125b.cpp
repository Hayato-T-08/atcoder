#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int ans=-1000;
    vector<int> v(n),c(n);
    rep(i,n) cin>>v[i];
    rep(i,n) cin>>c[i];
    for(int i=0;i<(1<<n);i++){
        int x=0,y=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                x+=v[j];
                y+=c[j];
            }
        }
        ans=max(ans,(x-y));
    }
    cout<<ans<<endl;
}