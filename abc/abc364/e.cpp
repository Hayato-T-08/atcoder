#include <bits/stdc++.h>
using namespace std;

struct Dish {
    int a, b;
};

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<Dish> dishes(N);
    for (int i = 0; i < N; ++i) {
        cin >> dishes[i].a >> dishes[i].b;
    }

    // dp[i][j]: 甘さの合計がi、しょっぱさの合計がjのときの最大料理数
    vector<vector<int>> dp(X + 1, vector<int>(Y + 1, -1));
    dp[0][0] = 0;

    for (const auto& dish : dishes) {
        for (int i = X; i >= 0; --i) {
            for (int j = Y; j >= 0; --j) {
                if (dp[i][j] == -1) continue;
                int ni = min(X, i + dish.a);
                int nj = min(Y, j + dish.b);
                dp[ni][nj] = max(dp[ni][nj], dp[i][j] + 1);
            }
        }
    }

    int result = 0;
    for (int i = 0; i <= X; ++i) {
        for (int j = 0; j <= Y; ++j) {
            result = max(result, dp[i][j]);
        }
    }

    cout << result << endl;
    return 0;
}