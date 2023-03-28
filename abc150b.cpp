#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    rep(i,n-2){
        if(s[i]=='A' and s[i+1]=='B' and s[i+2]=='C'){
            ans++;
        }
    }
    cout<<ans<<endl;
}