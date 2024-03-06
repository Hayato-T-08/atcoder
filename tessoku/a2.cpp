#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    rep(i,n){
        int a;
        cin>>a;
        if(a == x) {cout<<"Yes"<<endl;
         return 0;
        }
       
    }
    cout<<"No"<<endl;
}