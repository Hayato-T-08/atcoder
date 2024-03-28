#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(k+1);
    vector<long long> x(n+1),y(n+1);
    for(int i=1;i<=k;i++) cin>>a[i];

    for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
    long long ans=0;
    for(int i=1;i<=n;i++){
        long long dis=8e18;
        for(int j=1;j<=k;j++){
            dis=min(dis,(x[i]-x[a[j]])*(x[i]-x[a[j]])+(y[i]-y[a[j]])*(y[i]-y[a[j]]));
        }
        ans=max(dis,ans);
    }
    cout<<setprecision(18)<<sqrt(double(ans))<<endl;
}