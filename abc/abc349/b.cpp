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
    map<char,int> mp;
    map<int,int> mp2;
    rep(i,s.size()){
        mp[s[i]]++;
    }
    for(auto x: mp){
        mp2[x.second]++;
    }

    bool flag = true;
    for(auto x: mp2){
        if(x.second != 2 && x.second != 0){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    
    }else{
        cout << "No" << endl;
    }
    return 0;
}