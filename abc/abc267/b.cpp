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
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    string s;
    cin >> s;
    bool flag1 = false,flag2 = false;
    if(s[0] == '0') flag1 = true;
    vector<int> re(7,0);
    rep(i,10){
        if(i==6){
            if(s[i] == '1') re[0]++;
        }else if(i==3){
            if(s[i] == '1') re[1]++;
        }else if(i==7 || i == 1){   
            if(s[i] == '1') re[2]++;
        }else if(i == 4 || i == 0){
            if(s[i] == '1') re[3]++;
        }else if(i == 8 || i == 2){
            if(s[i] == '1') re[4]++;
        }else if(i == 5){
            if(s[i] == '1') re[5]++;
        }else{
            if(s[i] == '1') re[6]++;
        }
    }
    rep(l,7){
        rep(r,7){
            if(r <= l) continue;
            if(re[l] >=1 && re[r] >= 1){
                
                for(int i=l+1;i<r;i++){
                    if(re[i] == 0){
                        flag2 = true;
                    }
                }
            }
        }
    }
    if(flag1 && flag2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}