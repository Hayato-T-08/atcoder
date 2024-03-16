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
int main() {
    string s;
    cin >> s;
    stack<int> st;
    int n = s.size();
    rep(i,n){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            int j = st.top(); st.pop();
            cout << j + 1 << " " << i + 1 << endl;
        }
    }
    return 0;
}