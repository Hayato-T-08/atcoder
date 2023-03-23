#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ALL(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
    string s;
    cin>>s;
    int n=s.size();
    reverse(ALL(s));
    rep(i,n){
        if(s[i]=='6') s[i]='9';
        else if(s[i]=='9') s[i]='6';
    }

    cout<<s<<endl;
}