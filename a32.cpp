#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<bool> dp(n+1);
    for(int i=0;i<=n;i++){
        if(i>=a&&dp[i-a]==false) dp[i]=true;
        else if(i>=b&&dp[i-b]==false) dp[i]=true;
        else dp[i]=false;
    }
    if(dp[n]) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}