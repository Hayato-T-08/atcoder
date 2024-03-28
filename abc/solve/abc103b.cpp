#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s,t;
    cin>>s>>t;
    int x=s.size();
    bool ans=false;

    rep(i,x){
        
        string k="";;
        char tmp=s[x-1];
        k+=tmp;
        k+=s.substr(0,x-1);
        s=k;

        if(k==t) ans=true;
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}