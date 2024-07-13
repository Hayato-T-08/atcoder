#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el endl
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
using ll = long long;
using P = pair<int,int>;
using Pll = pair<ll,ll>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1073741823;
const int mod = 1e9+7;
const ll linf = 1LL << 60;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
template<typename T1, typename T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& p) {
    os << '(' << p.first << ", " << p.second << ')';
    return os;
}
template <typename T>
void pV(const std::vector<T>& array) {
    for (const auto& elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void p2V(const std::vector<std::vector<T>>& array) {
    for (const auto& row : array) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
         }
        std::cout << std::endl;
    }
}
// 4近傍、(一般的に)上右下左
//const int dy[4] = {-1,0,1,0};
//const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
//const int dy[8] = {-1,-1,-1,0,1,1,1,0};
//const int dx[8] = {-1,0,1,1,1,0,-1,-1};
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

bool canSumToZero(int n, const vector<int>& L, const vector<int>& R, vector<int>& result) {
    long long sumL = 0, sumR = 0;
    rep(i, n) {
        sumL += L[i];
        sumR += R[i];
    }

    // 全体の範囲が0を含まない場合は不可能
    if (sumL > 0 || sumR < 0) return false;

    // 各区間の中央値を取って初期総和を計算
    vector<int> medians(n);
    rep(i, n) {
        medians[i] = (L[i] + R[i]) / 2;
    }

    // 初期総和が0になるように調整する
    long long sumMedians = accumulate(all(medians), 0LL);
    long long target = -sumMedians;

    // 調整可能かどうかを確認
    vector<pair<int, int>> adjustments;
    rep(i, n) {
        adjustments.emplace_back(medians[i] - L[i], i); // (調整量, インデックス)
        adjustments.emplace_back(R[i] - medians[i], i);
    }

    sort(rall(adjustments));
    long long adjustmentSum = 0;
    vector<bool> used(n, false);
    for (const auto& [adj, idx] : adjustments) {
        if (!used[idx]) {
            adjustmentSum += adj;
            used[idx] = true;
            if (adjustmentSum >= target) {
                rep(i, n) {
                    if (used[i]) {
                        result[i] = medians[i];
                    } else {
                        result[i] = L[i]; // 使われなかった区間はL[i]を選ぶ
                    }
                }

                // 最後に残りの調整を行う
                long long remainingAdjustment = adjustmentSum - target;
                rep(i, n) {
                    if (remainingAdjustment == 0) break;
                    if (result[i] > L[i]) {
                        long long adjustment = min(remainingAdjustment, (long long)result[i] - L[i]);
                        result[i] -= adjustment;
                        remainingAdjustment -= adjustment;
                    } else if (result[i] < R[i]) {
                        long long adjustment = min(remainingAdjustment, (long long)R[i] - result[i]);
                        result[i] += adjustment;
                        remainingAdjustment -= adjustment;
                    }
                }

                return true;
            }
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> L(n), R(n);
    rep(i, n) {
        cin >> L[i] >> R[i];
    }

    vector<int> result(n);
    if (canSumToZero(n, L, R, result)) {
        Yes;
        rep(i, n) {
            cout << result[i] << " ";
        }
        cout << el;
    } else {
        No;
    }

    return 0;
}
