#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n+1);
    vector<vector<bool>> dp(n+1,vector<bool>(s+1,false));
    dp[0][0]=true;
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(j<a[i]){
                if(dp[i-1][j]==true) dp[i][j]=true;
            }else{
                if(dp[i-1][j]==true||dp[i-1][j-a[i]]==true) dp[i][j]=true;
            }
        }
    }
   
    int i=n;
    vector<int> ans;
    if(dp[n][s]){
        while (true)
            {
                if(i==0) break;

                if(dp[i-1][s]==true) i=i-1;
                else{
                        
                        s=s-a[i];
                        ans.push_back(i);
                        i=i-1;
                }
            }
        reverse(ans.begin(),ans.end());
            cout<<ans.size()<<endl;
            for(auto x:ans) cout<<x<<" ";
    }else{
        cout<<-1<<endl;
    }

    
}