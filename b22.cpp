#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    vector<int> dp(n+1);
    
    for(int i=2;i<=n;i++) cin>>a[i];
    for(int i=3;i<=n;i++) cin>>b[i];
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=2000000000;
    }
    

    for(int i=1;i<=n;i++){
        if(i<=n-1) dp[i+1]=min(dp[i+1],dp[i]+a[i+1]);
        if(i<=n-2) dp[i+2]=min(dp[i+2],dp[i]+b[i+2]);
    }
    cout<<dp[n]<<endl;
}