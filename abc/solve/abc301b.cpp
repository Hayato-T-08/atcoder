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

    rep(i,n-1){
        if(abs(a[i]-a[i+1])==1){
            cout<<a[i]<<" ";
        }else{
            if(a[i]<a[i+1]){
                for(int j=a[i];j<a[i+1];j++){
                    cout<<j<<" ";
                }
            }else{
                for(int j=a[i];j>a[i+1];j--){
                    cout<<j<<" ";
                }
            }
        }
    }
    cout<<a[n-1]<<endl;
}