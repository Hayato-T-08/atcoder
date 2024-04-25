#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    int x,y,z;
    cin >> x >> y >> z;
    vector<int> a(n),b(n),c(n);
    vector<bool> passed(n,false);
    vector<int> num(n,0);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) c[i] = a[i] + b[i];
    iota(num.begin(), num.end(), 0);
    auto f = [&](int i,int j){
        if(a[i] == a[j]) return i < j;
        return a[i] > a[j];
    };
    sort(num.begin(), num.end(), f);
    rep(i,x){
        passed[num[i]] = true;
    }
    auto g = [&](int i,int j){
        if(b[i] == b[j]) return i < j;
        return b[i] > b[j];
    };
    sort(num.begin(), num.end(), g);
    int cnt = 0;
    rep(i,n){
        if(cnt == y) break;
        if(!passed[num[i]]){
            passed[num[i]] = true; 
            cnt++;
        }
    }
    auto h = [&](int i,int j){
        if(c[i] == c[j]) return i < j;
        return c[i] > c[j];
    };
    sort(num.begin(), num.end(), h);
    cnt = 0;
    rep(i,n){
        if(cnt == z) break;
        if(!passed[num[i]]){
            passed[num[i]] = true; 
            cnt++;
        }
    }

    rep(i,n){
        if(passed[i]) cout << i+1 << endl;  
    }
    return 0;
}