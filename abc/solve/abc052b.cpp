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

    int maxv=0;
    int x=0;
    rep(i,n){
        if(s[i]=='I') x++;
        if(s[i]=='D') x--;
        maxv=max(x,maxv);
    }
    cout<<maxv<<endl;
}