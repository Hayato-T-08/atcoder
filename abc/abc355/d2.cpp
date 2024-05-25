#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);
    set<int> points;
    
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
        points.insert(intervals[i].first);
        points.insert(intervals[i].second);
    }
    
    // 座標圧縮
    unordered_map<int, int> compress;
    int index = 0;
    for (int point : points) {
        compress[point] = index++;
    }

    // 差分配列の構築
    vector<int> diff(index + 1, 0);
    for (const auto& interval : intervals) {
        diff[compress[interval.first]]++;
        diff[compress[interval.second]]--;
    }

    // 累積和の計算
    vector<int> overlap(index + 1, 0);
    overlap[0] = diff[0];
    for (int i = 1; i <= index; ++i) {
        overlap[i] = overlap[i - 1] + diff[i];
    }

    // 重なりの計算
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        int l = compress[intervals[i].first];
        int r = compress[intervals[i].second];
        ans += accumulate(overlap.begin() + l, overlap.begin() + r, 0) - (r - l);
    }

    cout << ans << endl;
    return 0;
}
