#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> t(n);
    rep(i,n) cin>>t[i];

    rep3(i,0,n-1){
        if(t[i+1]-t[i]<=d){
            cout<<t[i+1]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}