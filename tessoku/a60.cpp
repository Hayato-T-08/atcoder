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
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep1(i,n) cin >> a[i];
    stack<P> st;
    rep1(i,n){
        if(i>=2){
            st.push(make_pair(i-1,a[i-1]));
            
            while(!st.empty()){
                int b = st.top().second;
                if(b <= a[i]) st.pop();
                else break;
            }
        }
        if(!st.empty()) cout << st.top().first << " ";
        else cout << -1 << " ";
    }
    return 0;
}