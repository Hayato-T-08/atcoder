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

int main() {
    string s,t;
    cin >> s >> t;
    if(t[2] == 'X'){
        int cur = 0;
        rep(i,s.size()){
            if(tolower(t[cur]) == s[i]){
                cur++;
            }
            if(cur == 2){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }else{
        int cur = 0;
        rep(i,s.size()){
            if(tolower(t[cur]) == s[i]){
                cur++;
            }
            if(cur == 3){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}