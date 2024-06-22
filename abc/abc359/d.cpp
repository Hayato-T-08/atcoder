#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MOD = 998244353;

int count_good_strings(int N, int K, string S) {
    vector<vector<int>> dp(N + 1, vector<int>(1 << K, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int mask = 0; mask < (1 << K); mask++) {
            if (dp[i][mask] == 0) continue;

            for (char c : {'A', 'B'}) {
                if (S[i] != '?' && S[i] != c) continue;

                int new_mask = ((mask << 1) & ((1 << K) - 1)) | (c == 'B');
                bool is_palindrome = true;
                for (int l = 0, r = K - 1; l < r; l++, r--) {
                    if (((new_mask >> l) & 1) != ((new_mask >> r) & 1)) {
                        is_palindrome = false;
                        break;
                    }
                }

                if (!is_palindrome) {
                    dp[i + 1][new_mask] = (dp[i + 1][new_mask] + dp[i][mask]) % MOD;
                }
            }
        }
    }

    int result = 0;
    for (int mask = 0; mask < (1 << K); mask++) {
        result = (result + dp[N][mask]) % MOD;
    }

    return result;
}

int main() {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;

    cout << count_good_strings(N, K, S) << endl;
    return 0;
}
