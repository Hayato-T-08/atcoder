#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    set<int> st;
    rep(i,k){
        int d;
        cin>>d;
        rep(j,d){
            int a;
            cin>>a;
            st.insert(a);
        }
    }
    cout<<n-st.size()<<endl;
}