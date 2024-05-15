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
ll dp[300005][2];
bool memo[300005][2];
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    string s;
    cin >> s;

    auto f = [&](auto f, int i, int c) -> ll {
        if(i == s.size()) return 0;//最後まで行ったら終了
        if(memo[i][c]) return dp[i][c];//メモ化
        ll res = linf;
        int a = s[i] == 'A';//Aかどうか
        //i -> i+1 の遷移でcapslockがonにするかoffにするかを2^s.size()通り試す
        int cost1 = a==c ? x : y;//capslockをおさない場合 
        //Aでcapslockがonならx, offならy
        int cost2 = (a==c ? y : x)+z;//capslockをおす場合
        //Aで現在capslockがonならy, offならx
        res = cost1 + f(f,i+1, c);//capslockをおさない場合
        res = min(res, cost2 + f(f,i+1, !c));//capslockをおす場合
        memo[i][c] = true;
        return dp[i][c] = res;//メモ化
    };
    cout << f(f,0,0) << endl;
    
    return 0;
}