#include <bits/stdc++.h>
using namespace std;
#define ALL(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    sort(ALL(a));
    rep(i,n){
        if(i+1!=a[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
    


}