#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int a,b;
    cin>>a>>b;
    string s="",t="";
    rep(i,b) s+=a+'0';
    
    rep(i,a) t+=b+'0';
    
    if(s>t){
        cout<<t<<endl;
    }else {cout<<s<<endl;}

}