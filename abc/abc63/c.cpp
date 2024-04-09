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

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i,n){
        cin >> s[i];
    }
    ll sum = 0;
    sort(s.begin(),s.end());
    rep(i,n){
        sum += s[i];
    }
    if(sum%10 != 0) {
        cout << sum << endl;
        return 0;
    }else{
        rep(i,n){
            if((s[i])%10 != 0){
                cout << sum-s[i] << endl;
                return 0;
            }
        }
        cout << 0 << endl;
    }
    
}