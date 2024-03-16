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
    int q;
    cin >> q;
    stack<string> st;
    rep(i,q){
        int query;
        cin >> query;
        if(query == 1){
            string c;
            cin >> c;
            st.push(c);
        }
        else if(query == 2){
            string s = st.top();
            cout << s << endl;
        }
        else if(query == 3){
            st.pop();
        }
    }
    return 0;
}