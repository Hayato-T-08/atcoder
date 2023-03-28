#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    string s1,s2;
    int n;
    n=s.size();
    s1=s.substr(0,(n-1)/2);
    s2=s.substr((n+1)/2,(n-1)/2);
    string t,t1,t2;
    t=s;
    t1=s1;
    t2=s2;
    reverse(all(s));
    reverse(all(s1));
    reverse(all(s2));
    if(t==s and s1==t1 and s2==t2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}