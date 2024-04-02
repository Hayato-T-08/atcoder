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
    string s;
    cin >> s;
    int q;
    cin >> q;
    bool is_capital = false, is_capital2 = false;
    vector<int> t(q),x(q);
    vector<char> c(q);
    queue<P> que;
    rep(i,q) cin >> t[i] >> x[i] >> c[i];
    rep(i,q){
        if(t[i] == 1){
            s[x[i]-1] = c[i];
            if(is_capital){
                que.push(P(x[i]-1,s[x[i]-1]));
            }
            if(is_capital2){
                que.push(P(x[i]-1,s[x[i]-1]));
            }
        }
        else if(t[i] == 2){
            if(is_capital2) is_capital2 = false;
            is_capital = true;
            que = queue<P>();
        }else{
            if(is_capital) is_capital = false;
            is_capital2 = true;
            que = queue<P>();
        }

    }
    if(is_capital){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(!que.empty()){
            P p = que.front(); que.pop();
            s[p.first] = p.second;

        }
    }
    if(is_capital2){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        while(!que.empty()){
            P p = que.front(); que.pop();
            s[p.first] = p.second;

        }
    }

    cout << s << endl;
    return 0;
}