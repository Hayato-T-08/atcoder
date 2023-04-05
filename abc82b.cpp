#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s,t;
    cin>>s>>t;
    rep(i,s.size()){
        string s1;
        s1=s.substr(1)+s[0];
        rep(j,t.size()){
            string t1;
            t1=t.substr(1)+t[0];
            t=t1;
                 if(s<t) {
            cout<<"Yes"<<endl;
            return 0;
        }
        }
        s=s1;

    }
    cout<<"No"<<endl;
    return 0;
}