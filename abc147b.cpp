#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    string t=s;
    reverse(all(t));
    int cnt=0;
    rep(i,int(s.size())/2){
        if(t[i]!=s[i]) cnt++;
    }
    cout<<cnt<<endl;
}