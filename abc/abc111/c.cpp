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
    int n;
    cin >> n;
    map<int,int> odd,even;
    rep(i,n){
        int v;
        cin >> v;
        if(i % 2 == 0){
            even[v]++;
        }else{
            odd[v]++;
        }
    }
    int max_even = 0, max_odd = 0;
    int max_even_num = 0, max_odd_num = 0;
    for(auto p : even){
        if(p.second > max_even){
            max_even = p.second;
            max_even_num = p.first;
        }
    }
    for(auto p : odd){
        if(p.second > max_odd){
            max_odd = p.second;
            max_odd_num = p.first;
        }
    }
    if(max_even_num == max_odd_num){
        int max_even2 = 0, max_odd2 = 0;
        for(auto p : even){
            if(p.first == max_even_num) continue;
            if(p.second > max_even2){
                max_even2 = p.second;
            }
        }
        for(auto p : odd){
            if(p.first == max_odd_num) continue;
            if(p.second > max_odd2){
                max_odd2 = p.second;
            }
        }
        int ans = n - max(max_even + max_odd2, max_even2 + max_odd);
        cout << ans << endl;
        return 0;
    }
    int ans = n - max_even - max_odd;
    cout << ans << endl;
    return 0;
}