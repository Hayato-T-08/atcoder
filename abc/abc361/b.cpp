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
struct RectangularPrism {
    int x1, y1, z1;
    int x2, y2, z2;

    RectangularPrism(int a, int b, int c, int d, int e, int f) {
        x1 = std::min(a, d);
        y1 = std::min(b, e);
        z1 = std::min(c, f);
        x2 = std::max(a, d);
        y2 = std::max(b, e);
        z2 = std::max(c, f);
    }
};

bool isIntersectionVolumePositive(RectangularPrism A, RectangularPrism B) {
    int intersect_x1 = std::max(A.x1, B.x1);
    int intersect_y1 = std::max(A.y1, B.y1);
    int intersect_z1 = std::max(A.z1, B.z1);
    int intersect_x2 = std::min(A.x2, B.x2);
    int intersect_y2 = std::min(A.y2, B.y2);
    int intersect_z2 = std::min(A.z2, B.z2);

    int intersect_length_x = intersect_x2 - intersect_x1;
    int intersect_length_y = intersect_y2 - intersect_y1;
    int intersect_length_z = intersect_z2 - intersect_z1;

    return (intersect_length_x > 0 && intersect_length_y > 0 && intersect_length_z > 0);
}

int main() {
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    
    std::cin >> a >> b >> c >> d >> e >> f;
    std::cin >> g >> h >> i >> j >> k >> l;
    
    RectangularPrism C1(a, b, c, d, e, f);
    RectangularPrism C2(g, h, i, j, k, l);

    if (isIntersectionVolumePositive(C1, C2)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}