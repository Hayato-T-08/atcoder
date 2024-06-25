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
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
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
int main() {
    int n,m;
    cin >> n >> m;
    Graph A(n),B(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--,b--;
        A[a].push_back(b);
        A[b].push_back(a);
    }

    rep(i,n){
        sort(all(A[i]));
    }

    rep(i,m){
        int c,d;
        cin >> c >> d;
        c--,d--;
        B[c].push_back(d);
        B[d].push_back(c);
    }

    rep(i,n){
        sort(all(B[i]));
    }

    vector<int> num(n);
    iota(all(num),0);

    do{
        bool ok = true;

        rep(i,n){
            if(A[i].size() != B[num[i]].size()){
                ok = false;
                break;
            }

            vector<int> tmp1 ,tmp2 = B[num[i]];
            rep(j,A[i].size()){
                tmp1.push_back(num[A[i][j]]);
            }
            sort(all(tmp1));
            sort(all(tmp2));
            if(tmp1 != tmp2){
                ok = false;
                break;
            }
        }
        if(ok){
            Yes;
            return 0;
        }
    }while(next_permutation(all(num)));
    No;
    return 0;
}