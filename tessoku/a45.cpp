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
    char c;
    cin >> n >> c;
    vector<char> s(n+1);
    rep1(i,n){
        cin >> s[i];
    }
    ll score = 0;
    rep1(i,n){
        if(s[i] == 'B') score += 1;
        if(s[i] == 'R') score += 2;
    }

    if(score % 3 == 0 && c == 'W') cout << "Yes" << endl;
    else if(score % 3 == 1 && c == 'B') cout << "Yes" << endl;
    else if(score % 3 == 2 && c == 'R') cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}