#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    vector<int> r(n+1);
    for(int i=1;i<=n;i++) cin>> a[i];
    for(int i=1;i<=n-1;i++){
        if(i==1){
            r[i]=1;
        }else{
            r[i]=r[i-1];
        }
        while(r[i]<n&&a[r[i]+1]-a[i]<=k){
            r[i]++;
        }

    }
    long long ans=0;
    for(int i=1;i<=n-1;i++){
        ans+=(r[i]-i);
    }
    cout<<ans<<endl;
}