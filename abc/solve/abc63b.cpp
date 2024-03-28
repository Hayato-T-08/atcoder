#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s,t;

    cin>>s;
    t=s;
    sort(all(s));
    sort(all(t));
    s.erase(unique(all(s)),s.end());

    if(s==t) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}