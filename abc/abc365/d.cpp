#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    vector<vector<int>> dp(3, vector<int>(N+1, 0));
    //R = 0, P = 1, S = 2
    //Rで勝利するにはPが必要
    //Pで勝利するにはSが必要
    //Sで勝利するにはRが必要
    //かつ一度も負けてはならない
    //連続して同じ手は出せない
    for(int i=1;i<=N;i++) {
        if(S[i-1] == 'R'){
            //かつ場合
            dp[1][i] = max(dp[0][i-1] + 1, dp[2][i-1] + 1);
            //あいこ
            dp[0][i] = max(dp[1][i-1], dp[2][i-1]);
        }else if(S[i-1] == 'P'){
            //かつ場合
            dp[2][i] = max(dp[1][i-1] + 1, dp[0][i-1] + 1);
            //あいこ
            dp[1][i] = max(dp[0][i-1], dp[2][i-1]);

        }else if(S[i-1] == 'S'){
            dp[0][i] = max(dp[1][i-1] + 1, dp[2][i-1] + 1);
            //あいこ
            dp[2][i] = max(dp[0][i-1], dp[1][i-1]);
        }
    }
    cout << max({dp[0][N], dp[1][N], dp[2][N]}) << endl;
}
