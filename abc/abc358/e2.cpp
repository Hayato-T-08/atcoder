#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int k;
    cin >> k;
    vector<int> c(26);
    for (int i = 0; i < 26; ++i) {
        cin >> c[i];
    }

    // dp[i][j] = 長さがiの文字列で、使用済み文字数がjのものの数
    vector<vector<int>> dp(k + 1, vector<int>(k + 1, 0));
    dp[0][0] = 1; // 空の文字列

    for (int i = 0; i < 26; ++i) {
        vector<vector<int>> new_dp = dp;
        for (int j = 0; j <= k; ++j) {
            for (int l = 0; l <= k - j; ++l) {
                for (int m = 1; m <= c[i] && j + m <= k; ++m) {
                    new_dp[j + m][l + 1] = (new_dp[j + m][l + 1] + dp[j][l]) % MOD;
                }
            }
        }
        dp = new_dp;
    }

    int result = 0;
    for (int i = 1; i <= k; ++i) {
        result = (result + dp[i][i]) % MOD;
    }

    cout << result << endl;
    return 0;
}
