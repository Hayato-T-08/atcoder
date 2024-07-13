#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval {
    long long L, R;
};

bool can_find_zero_sum_intervals(int n, const vector<Interval>& intervals, vector<long long>& result) {
    vector<long long> medians(n);
    long long total_sum = 0;

    for (int i = 0; i < n; ++i) {
        long long L = intervals[i].L;
        long long R = intervals[i].R;
        medians[i] = (L + R) / 2;
        total_sum += medians[i];
    }

    vector<pair<long long, int>> adjustments;
    for (int i = 0; i < n; ++i) {
        long long L = intervals[i].L;
        long long R = intervals[i].R;
        if (medians[i] > L) adjustments.emplace_back(medians[i] - L, i);
        if (medians[i] < R) adjustments.emplace_back(R - medians[i], i);
    }

    sort(adjustments.begin(), adjustments.end());

    for (auto &[diff, idx] : adjustments) {
        long long L = intervals[idx].L;
        long long R = intervals[idx].R;
        if (total_sum > 0 && medians[idx] > L) {
            long long adjustment = min(total_sum, medians[idx] - L);
            medians[idx] -= adjustment;
            total_sum -= adjustment;
        } else if (total_sum < 0 && medians[idx] < R) {
            long long adjustment = min(-total_sum, R - medians[idx]);
            medians[idx] += adjustment;
            total_sum += adjustment;
        }
        if (total_sum == 0) break;
    }

    result = medians;
    return total_sum == 0;
}

int main() {
    int n;
    cin >> n;
    vector<Interval> intervals(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].L >> intervals[i].R;
    }
    
    vector<long long> result;
    if (can_find_zero_sum_intervals(n, intervals, result)) {
        cout << "Yes" << endl;
        for (long long x : result) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
