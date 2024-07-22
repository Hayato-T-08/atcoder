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
using P = pair<int, int>;
using Pll = pair<ll, ll>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1073741823;
const int mod = 1e9 + 7;
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
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }

int main() {
    int n;
    cin >> n;
    ll x;
    cin >> x;
    string s;
    cin >> s;

    stack<char> st;
    // 操作を簡潔に管理するためのスタック
    for (char c : s) {
        if (c == 'U') {
            if (!st.empty() && st.top() != 'U') {
                // 'L' または 'R' の場合には直前の操作を無効にする
                st.pop();
            } else {
                // それ以外の場合は 'U' をスタックに追加
                st.push('U');
            }
        } else {
            // 'L' または 'R' の場合はそのままスタックに追加
            st.push(c);
        }
    }

    string new_s;
    while (!st.empty()) {
        new_s += st.top();
        st.pop();
    }
    reverse(all(new_s));

    // スタックの内容に基づいて最終的な数値を計算
    ll now = x;
    for (char c : new_s) {
        if (c == 'U') {
            now /= 2;
        } else if (c == 'R') {
            now = now * 2 + 1;
        } else if (c == 'L') {
            now *= 2;
        }
    }

    cout << now << el;
    return 0;
}
