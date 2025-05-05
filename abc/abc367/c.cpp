#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> r(n);
    for (int i = 0; i < n; i++)
        cin >> r[i];

    // dp[i][j]: i番目までの桁で、合計をkで割った余りがjとなる組み合わせの数
    vector<vector<int>> dp(n + 1, vector<int>(k, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (dp[i][j] == 0)
                continue;
            for (int d = 1; d <= r[i]; d++)
            {
                int next_j = (j + d) % k;
                dp[i + 1][next_j] += dp[i][j];
            }
        }
    }

    cout << dp[n][0] << endl;
    return 0;
}
