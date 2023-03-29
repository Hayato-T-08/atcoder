#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    bool a=true,b=true;
    rep(i,s.size()){
        if(i%2==0){
            if(s[i]!='R' and s[i]!='U' and s[i]!='D') a=false;
        }else{
            if(s[i]!='L' and s[i]!='U' and s[i]!='D') b=false;
        }

    }
    if(a and b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}