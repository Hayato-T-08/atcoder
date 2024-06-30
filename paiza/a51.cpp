#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> dp(h+1, vector<int>(w,0));
    vector<vector<int>> s(h, vector<int>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j];
        }
    }

    for(int i=0;i<w;i++) dp[0][i] = s[0][i];
    for(int i=0;i<h-1;i++){
        for(int j=0;j<w;j++){
            chmax(dp[i+1][j],dp[i][j]+s[i+1][j]);
            if(j - 1 >= 0) chmax(dp[i+1][j-1],dp[i][j]+s[i+1][j-1]);
            if(j + 1 < w) chmax(dp[i+1][j+1],dp[i][j]+s[i+1][j+1]);
        }
    }

    cout << *max_element(dp[h-1].begin(),dp[h-1].end()) << endl;
}