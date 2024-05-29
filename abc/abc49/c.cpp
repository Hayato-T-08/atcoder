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
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    int n = s.size();
    set<string> st;
    st.insert("maerd");
    st.insert("remaerd");
    st.insert("esare");
    st.insert("resare");
    string t = "";
    string u = "";
    rep(i,n){
        u += s[i];
        if(st.count(u)){
            t += u;
            u = "";
        }
    }
    if(s == t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}