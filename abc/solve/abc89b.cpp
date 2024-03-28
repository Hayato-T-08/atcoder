#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;


    set<char> st;
    rep(i,n){
        char x;
        cin>>x;
        st.insert(x);
    }


    if(st.size()==3) cout<<"Three"<<endl;
    else cout<<"Four"<<endl;
}