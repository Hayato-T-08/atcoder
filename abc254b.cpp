#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> dp(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0||j==i) dp[i].push_back(1);
            else{
                dp[i].push_back(dp[i-1][j-1]+dp[i-1][j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(auto x:dp[i]){
            cout<<x<<" ";            
        }
        cout<<endl;
    }
}