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

int getScore(int a,int b,int n,vector<int> A,vector<int> B, int k){
    int cnt = 0;
    rep1(i,n){
        if(a<=A[i] && A[i]<=a+k && b<=B[i] && B[i]<=b+k) cnt++;
    }

    return cnt;
}
int main() {
    int n,k;
    
    cin >> n >> k;
    vector<int> A(n+1),B(n+1);
    int ans = 0;
    rep1(i,n) cin >> A[i] >> B[i];
    rep1(a,100){
        rep1(b,100){
            ans = max(ans,getScore(a,b,n,A,B,k));
        }
    }
   
    cout << ans << endl;
}