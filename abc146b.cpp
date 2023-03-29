#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    string s;
    cin>>n>>s;
    rep(i,s.size()){
        s[i]=(s[i]+n-'A')%26+'A';
    }
    cout<<s<<endl;
    
}