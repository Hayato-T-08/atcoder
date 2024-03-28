#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    int ans=0;
    rep3(i,2,s.size()-1){
        
        if(i%2==0){            
            string s1,s2;
            s1=s.substr(0,i/2);
            s2=s.substr(i/2,i/2);
            if(s1==s2){
                ans=max(i,ans);
            }}
    }
    cout<<ans<<endl;
}