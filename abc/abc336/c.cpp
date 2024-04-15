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
ll ll25(ll n){
    ll res = 0;
    ll i=1;
    while(n != 0){
        res += n%5*i;
        n/=5;
        i*=10;
    }
    return res;
}
int main() {
    ll n;
    cin >> n;
    string s = to_string(ll25(n-1));
    rep(i,s.size()){
        if(s[i] == '0'){
            cout << 0;
        }else if(s[i] == '1'){
            cout << 2;
        }else if(s[i] == '2'){
            cout << 4;
        }else if(s[i] == '3'){
            cout << 6;
        }else{
            cout << 8;
        }
    }
    return 0;
}