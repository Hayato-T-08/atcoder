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
int main() {
    ll n;
    cin >> n;
    if(n==1){
        cout << 0 << el;
        return 0;
    }//0を例外処理することで、n-1の処理を簡略化できる
    n--;
    for(int keta = 1;; keta++){//1桁、2桁、3桁...と増やしていく
        int l = (keta+1)/2;//ketaが奇数ならlはketa/2+1、偶数ならketa/2
        // 9 9 90 90 900 900 9000 9000と増加していくため
        ll num = 9;
        rep(i,l-1) num *= 10;//各桁の回文数の個数
        if(n > num) {//回文数の個数よりもnが大きい場合には、numを引いてnを減らす
            n-=num;
            continue;
        }
        //nは各桁数の回文数から何番目の回文数かを表す
        // 1 : num/9
        n += num/9-1;//n--をしたので、nは0-indexedになっている
        //また桁数の最初の数は10000... 10^(l-1) n番目の回文数ha n + num/9 - 1となる
        string s = to_string(n);
        string rs = s;
        reverse(all(rs));
        if(keta%2 == 1) s.pop_back();//奇数桁の場合は、最後の桁を削除
        s+=rs;
        cout << s << el;
        return 0;
    }
    return 0;
}