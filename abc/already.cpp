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
bool check(string s,string t){
    if(s.size() + 1 != t.size()) return false;
    int cur = 0;
    for(int i=0; i<t.size();i++){
        if(s[cur] == t[i]){
            cur++;
        }
    }
    
    return cur == s.size();
}
bool check2(string s,string t){
    if(s.size() != t.size()) return false;
    int cur = 0;
    rep(i,s.size()){
        if(s[i] == t[i]){
            cur++;
        }
    }
    
    return cur == s.size()-1;
}
int main() {
    int n;
    string t;
    cin >> n >> t;
    vector<int> ans;
    rep(i,n){
        string s;
        cin >> s;
        if(s.size() + 1 >= t.size()){
            bool flag1 = (s == t);
            bool flag2 = check(s,t);
            bool flag3 = check(t,s);
            bool flag4 = check2(s,t);
            if(flag1 || flag2 || flag3 || flag4){
                ans.push_back(i);
            }
        }

    }
    cout << ans.size() << endl;
    rep(i,ans.size()){
        cout << ans[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}