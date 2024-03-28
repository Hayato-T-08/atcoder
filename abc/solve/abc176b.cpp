#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    long long ans=0;

    rep(i,s.size()){
        ans+=s[i]-'0';
    }

    if(ans%9) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    
    
}