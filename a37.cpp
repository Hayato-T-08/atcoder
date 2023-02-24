#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,b;
    cin>>n>>m>>b;
    vector<int> a(n+1);
    vector<int> c(m+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>c[i];

    long long ans=0;
    for(int i=1;i<=n;i++) ans+=a[i]*m;
    for(int i=1;i<=m;i++) ans += c[i]*n;
    ans+=b*n*m;
    cout<<ans<<endl;

}