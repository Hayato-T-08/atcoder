#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 配列の長さが k と同じかそれ以上でないと不可能
    if (n <= k) {
        cout << 0 << endl;
        return 0;
    }

    // 最小の差を求めるために、二分探索を使用する
    auto canAchieve = [&](int maxDiff) -> bool {
        deque<int> minDeque, maxDeque;
        for (int i = 0; i < n; ++i) {
            while (!minDeque.empty() && a[minDeque.back()] >= a[i]) minDeque.pop_back();
            while (!maxDeque.empty() && a[maxDeque.back()] <= a[i]) maxDeque.pop_back();
            minDeque.push_back(i);
            maxDeque.push_back(i);

            // 範囲外のインデックスを削除
            if (i >= n - k) {
                while (!minDeque.empty() && minDeque.front() <= i - (n - k)) minDeque.pop_front();
                while (!maxDeque.empty() && maxDeque.front() <= i - (n - k)) maxDeque.pop_front();
            }

            // 現在のウィンドウ内で最大値と最小値の差がmaxDiff以下であるかを確認
            if (i >= n - k - 1 && a[maxDeque.front()] - a[minDeque.front()] <= maxDiff) {
                return true;
            }
        }
        return false;
    };

    // 二分探索で最小の差を見つける
    int left = 0, right = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
    while (left < right) {
        int mid = (left + right) / 2;
        if (canAchieve(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    cout << left << endl;

    return 0;
}
