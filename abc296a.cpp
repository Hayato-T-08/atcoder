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
    rep3(i,1,n){
        if(s[i]==s[i-1]){ cout<<"No"<<endl;
        return 0;}
    }
    cout<<"Yes"<<endl;
    return 0;
}