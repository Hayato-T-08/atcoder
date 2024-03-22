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
vector<set<string>> ans(21);
void check(){
    for(int i=4;i<=20;i+=2){
        for(auto x: ans[i-2]){
            ans[i].insert("(" + x +")");
        }

        for(int j=2;j<=i-2;j+=2){
            for(auto x: ans[j]){
                for(auto y: ans[i-j]){
                    ans[i].insert(x + y);
                }
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    if(n % 2 == 1){
        return 0;
    }
    ans[2].insert("()");
    check();

    for(auto x: ans[n]){
        cout << x << endl;
    }
    return 0;
}