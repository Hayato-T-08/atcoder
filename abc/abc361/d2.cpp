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

struct State {
    vector<char> cells;
    int moves;

    bool operator<(const State& other) const {
        return cells < other.cells;
    }
};

int minMoves(int N, string S, string T) {
    vector<char> start(N + 2, '.');
    vector<char> goal(N + 2, '.');

    for (int i = 0; i < N; i++) {
        start[i] = S[i];
        goal[i] = T[i];
    }

    set<State> visited;
    queue<State> q;
    q.push({start, 0});
    visited.insert({start, 0});

    while (!q.empty()) {
        State current = q.front();
        q.pop();

        if (current.cells == goal) {
            return current.moves;
        }

        for (int i = 0; i <= N; i++) {
            if (current.cells[i] != '.' && current.cells[i + 1] != '.') {
                for (int j = 0; j <= N; j++) {
                    if (current.cells[j] == '.' && current.cells[j + 1] == '.') {
                        vector<char> nextCells = current.cells;
                        nextCells[j] = nextCells[i];
                        nextCells[j + 1] = nextCells[i + 1];
                        nextCells[i] = '.';
                        nextCells[i + 1] = '.';
                        
                        State nextState = {nextCells, current.moves + 1};
                        
                        if (visited.find(nextState) == visited.end()) {
                            q.push(nextState);
                            visited.insert(nextState);
                        }
                    }
                }
            }
        }
    }

    return -1;
}

int main() {
    int N;
    string S, T;

    cin >> N >> S >> T;
    cout << minMoves(N, S, T) << endl; 

    return 0;
}
