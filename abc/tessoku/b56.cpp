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
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
template<typename T> inline void print_vec(const vector<T> &v, bool split_line=false) {
    if(v.empty()){
        cout << "This vector is empty." << el;
        return;
    }
    bool isValue = (is_integral<T>::value);
    for (int i = 0; i < (int)v.size(); i++) {
        if(isValue && (v[i]==inf || v[i]==linf)) cout << 'x' << " \n"[split_line || i+1==(int)v.size()];
        else cout << v[i] << " \n"[split_line || i+1==(int)v.size()];
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
vector<mint> h1,h2,b,t1,t2;
void make_hash(int n,string s){
    t1.resize(n+1);
    t2.resize(n+1);
    b.resize(n+1);
    h1.resize(n+1);
    h2.resize(n+1);
    rep1(i,n) t1[i] = (int)(s[i-1] - 'a' + 1);
    reverse(all(s));
    rep1(i,n) t2[i] = (int)(s[i-1] - 'a' + 1);
    b[0] = 1;
    rep1(i,n) b[i] = b[i-1]*100;
    h1[0] = 0;
    h2[0] = 0;
    rep1(i,n) h1[i] = h1[i-1] * 100 + t1[i];
    rep1(i,n) h2[i] = h2[i-1] * 100 + t2[i];
}
int main() {
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    make_hash(n,s);
    rep(i,q){
        int l,r;
        cin >> l >> r;
        mint H1,H2;
        H1 = h1[r] - b[r-l+1]*h1[l-1];
        int tmp = l;
        l = n - r + 1;
        r = n - tmp + 1;
        H2 = h2[r] - b[r-l+1]*h2[l-1];
        if(H1 == H2) Yes;
        else No;
    }
    return 0;
}