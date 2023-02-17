#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(k+1);
    vector<bool> dp(n+1);
    for(int i=1;i<=k;i++) cin>>a[i];
    
   
    for(int i=0;i<=n;i++){
        dp[i]=false;
        for(int j=1;j<=k;j++){
            if(i>=a[j]&&dp[i-a[j]]==false) dp[i]=true;
            
        }
    }
    if(dp[n]) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}