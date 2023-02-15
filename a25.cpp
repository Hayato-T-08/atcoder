#include <bits/stdc++.h>
using namespace std;
int main(){
    long long h,w;
    cin>>h>>w;
    vector<vector<char>> a(h+1,vector<char>(w+1));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<long long>> dp(h+1,vector<long long>(w+1,0));
    dp[1][1]=1;

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(i>=2&&a[i-1][j]=='.') dp[i][j]+=dp[i-1][j];
            if(j>=2&&a[i][j-1]=='.') dp[i][j]+=dp[i][j-1];
        }
    }
    cout<<dp[h][w]<<endl;
}