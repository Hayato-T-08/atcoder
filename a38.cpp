#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,n;
    cin>>d>>n;
    vector<int> l(n+1),r(n+1),h(n+1),lim(d+1,24);
    for(int i=1;i<=n;i++) cin>>l[i]>>r[i]>>h[i];
    for(int i=1;i<=n;i++){
        for(int j=l[i];j<=r[i];j++) lim[j]=min(lim[j],h[i]);
    }
    int ans=0;
    for(int i=1;i<=d;i++) ans+=lim[i];
    cout<<ans<<endl;
}