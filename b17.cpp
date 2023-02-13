#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> h(n+1);
    vector<int> dp(n+1);
    for(int i=1;i<=n;i++) cin>>h[i];
    dp[1]=0;
    dp[2]=abs(h[1]-h[2]);
    for(int i=3;i<=n;i++){
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    vector<int> ans;
    int place=n;
    while (true)
    {
        ans.push_back(place);
        if(place==1) break;
        if(dp[place]==dp[place-1]+abs(h[place]-h[place-1])) place--;
        else place=place-2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    
}