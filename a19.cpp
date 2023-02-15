#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,W;
    cin>>N>>W;
    vector<int> w(N+1);
    vector<int> v(N+1);
    vector<vector<long long>> dp(N+1,vector<long long>(W+1));
    for(int i=1;i<=N;i++) cin>>w[i]>>v[i];
    dp[0][0]=0;
    for(int i=1;i<=N;i++){
        for(int j=0;j<=W;j++){
            if(j<w[i]){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
            }
        }
    }
    long long ans=0;
    for(int i=0;i<=W;i++) ans=max(dp[N][i],ans);
    cout<<ans<<endl;
}