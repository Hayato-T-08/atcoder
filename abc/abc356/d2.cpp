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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    ull N, M;
    const int MOD = 998244353;
    
    cin >> N >> M;
    
    ull sum = 0;

    for (int i = 0; i < 60; ++i) {
        ull bit = 1ULL << i;
        
        if (M & bit) {

            ull cycles = (N + 1) / (bit << 1);
            ull remainder = (N + 1) % (bit << 1);
            
            ull count = cycles * bit;
            if (remainder > bit) {
                count += remainder - bit;
            }
            
        
            sum = (sum + count) % MOD;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}