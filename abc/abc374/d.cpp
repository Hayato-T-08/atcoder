#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
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
template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p)
{
    os << '(' << p.first << ", " << p.second << ')';
    return os;
}
template <typename T>
void pV(const std::vector<T> &array)
{
    for (const auto &elem : array)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void p2V(const std::vector<std::vector<T>> &array)
{
    for (const auto &row : array)
    {
        for (const auto &elem : row)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}
// 4近傍、(一般的に)上右下左
// const int dy[4] = {-1,0,1,0};
// const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
// const int dy[8] = {-1,-1,-1,0,1,1,1,0};
// const int dx[8] = {-1,0,1,1,1,0,-1,-1};
using ull = unsigned long long;
template <typename T>
inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

long long dist(long long x1, long long y1, long long x2, long long y2)
{
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

double simulate(vector<long long> a, vector<long long> b, vector<long long> c, vector<long long> d, long long s, long long t, vector<int> perm, int choice)
{
    pair<int, int> now = {0, 0};
    double time = 0;
    for (int i = 0; i < (int)perm.size(); i++)
    {
        int next = perm[i];
        pair<int, int> from, to;
        if (choice & (1 << i))
        {
            from = {a[next], b[next]};
            to = {c[next], d[next]};
        }
        else
        {
            from = {c[next], d[next]};
            to = {a[next], b[next]};
        }
        long long dist_now_to_next = dist(now.first, now.second, from.first, from.second);
        double time_now_to_next = sqrt(dist_now_to_next) / s;
        time += time_now_to_next;

        time += sqrt(dist(from.first, from.second, to.first, to.second)) / t;
        now = to;
    }
    return time;
}

int main()
{
    int n; // 1<=n<=6 6! = 720
    long long s, t;
    cin >> n >> s >> t;
    vector<long long> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<int> perm(n);
    for (int i = 0; i < n; i++)
        perm[i] = i;
    double ans = 1e18;
    do
    {
        // 各ポイントでの選択（a,bに行くかc,dに行くか）を全探索
        for (int choice = 0; choice < (1 << n); choice++)
        {
            ans = min(ans, simulate(a, b, c, d, s, t, perm, choice));
        }
    } while (next_permutation(perm.begin(), perm.end()));
    cout << fixed << setprecision(20) << ans << endl;

    return 0;
}