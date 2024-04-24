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
    int h,w;
    cin >> h >> w;
    vector<string> a(h),b(h);
    rep(i,h) cin >> a[i];
    rep(i,h) cin >> b[i];
    deque<int> H(h),W(w);
    rep(i,h) H[i] = i;
    rep(i,w) W[i] = i;

    rep(i,h){
        int end = H.back();
        H.pop_back();
        H.push_front(end);

        rep(j,w){
            int end = W.back();
            W.pop_back();
            W.push_front(end);
            bool flag = true;
            rep(k,h){
                rep(l,w){
                    if(a[H[k]][W[l]] != b[k][l]){                  
                        flag &= false;
                    }
                }
            }
            if(flag){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    

    cout << "No" << endl;
    return 0;

}