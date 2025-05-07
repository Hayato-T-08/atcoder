#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<vector<long long>> dp(2, vector<long long>(n+1, 0));
    dp[0][0] = 0;//偶数
    dp[1][0] = a[0];//奇数
    //奇数から偶数に遷移
    //偶数から奇数に遷移
    for(int i = 1; i < n; i++){
        //奇数 奇数から奇数 と 偶数から奇数
        dp[1][i] = max(dp[1][i-1] + 0, dp[0][i-1] + a[i]);
        //偶数 奇数から偶数 と 偶数から偶数
        dp[0][i] = max(dp[1][i-1] + a[i] * 2, dp[0][i-1]);
    }
    cout << max(dp[0][n-1], dp[1][n-1]) << endl;
    return 0;
}   
