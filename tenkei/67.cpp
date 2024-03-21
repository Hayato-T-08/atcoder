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
long long base8_to_long(string s){
    long long res = 0;
    long long base = 1;
    for(int i = s.size()-1; i >= 0; i--){
        res += (s[i] - '0') * base;
        base *= 8;
    }
    return res;

}

string long_to_base9(long long n){
    if(n == 0) return 0;
    string res = "";
    while(n > 0){
        res = to_string(n % 9) + res;
        n /= 9;
    }
    return res;
}
int main() {
    string n,K;
    cin >> n >> K;
    if(n == "0"){
        cout << 0 << endl;
        return 0;
    }

    string ans = n;
    int k = stoi(K);
    rep(i,k){
        ll base8 = base8_to_long(ans);
        string base9 = long_to_base9(base8);
        rep(j,base9.size()){
            if(base9[j] == '8'){
                base9[j] = '5';
            }
        }
        ans = base9;
    }
    cout << ans << endl;
    return 0;
}