#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int l,h,n;
    cin>>l>>h;
    cin>>n;

    vector<int> a(n);
    rep(i,n) cin>>a[i];

    rep(i,n){
        if(a[i]>=l and a[i]<=h){
            cout<<0<<endl;
        }else if(a[i]>h){
            cout<<-1<<endl;
        }else{
            cout<<l-a[i]<<endl;
        }
    }
}