#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    int t=753;
    int ans=1e5;
    rep(i,s.size()-2){
        string x="";
        
        rep3(j,i,i+3){
            x+=s[j];
        }
        

        ans=min(ans,abs(stoi(x)-t));
    }
    cout<<ans<<endl;
}