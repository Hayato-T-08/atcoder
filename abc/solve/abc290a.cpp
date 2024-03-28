#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];

    int ans=0;
    for(int i=1;i<=m;i++){
        ans+=a[b[i]];
    }
    cout<<ans<<endl;
}