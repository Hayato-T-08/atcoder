#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    string s,t;
    cin>>n>>s>>t;
    string new_s="";
    rep(i,n){
        new_s+=s[i];
        new_s+=t[i];
    }
    cout<<new_s<<endl;
}