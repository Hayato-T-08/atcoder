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
    bool jug1=false,jug2=true;
    rep(i,n){
        if(s[i]=='o') jug1=true;
        if(s[i]=='x') jug2=false;
    }
    if(jug1 and jug2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}