#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    rep(i,n){
        if(a[i]%2==0){
            if(a[i]%3!=0 and a[i]%5!=0){
                cout<<"DENIED"<<endl;
                return 0;

            }
        }
    }
    cout<<"APPROVED"<<endl;
    return 0;
}