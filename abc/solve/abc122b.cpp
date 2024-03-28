#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int ans=-1;
    rep(i,n){
        int cnt=0;
        rep3(j,i,n){
            if(s[j]=='A' or s[j]=='C' or s[j]=='T' or s[j]=='G') cnt++;
            else break;
        }
        ans=max(cnt,ans);
    }
    cout<<ans<<endl;
}