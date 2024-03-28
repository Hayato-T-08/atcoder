#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s,t;
    cin>>s>>t;
    int ans=1000;
    rep(i,s.size()-t.size()+1){
        int cnt=0;
        rep(j,t.size()){            if(s[j+i]!=t[j]) cnt++;
        }
 
        ans=min(cnt,ans);
    }
    cout<<ans<<endl;
}