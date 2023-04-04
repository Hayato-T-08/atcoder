#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    rep3(i,a,b+1){
        string s=to_string(i);
        string t=s;
        reverse(all(s));
        if(t==s) cnt++;
    }
    cout<<cnt<<endl;
}