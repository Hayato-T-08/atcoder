#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    set<string> st={ "and", "not", "that", "the", "you"};
    rep(i,n) cin>>s[i];
    bool ans=false;
    rep(i,n){
        if(st.count(s[i])){
            ans=true;
        }
    }
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    


}