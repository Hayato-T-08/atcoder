#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int t,a;
    cin>>t>>a;
    
    vector<double> c(n);
    rep(i,n){
        int h;
        cin>>h;
        c[i]=t-0.006*h;

    }
    double min_c=1e5,idx=-1;
    rep(i,n){
        if(min_c>abs(a-c[i])){
            min_c=abs(a-c[i]);
            idx=i+1;
        }
    }
    cout<<idx<<endl;
}