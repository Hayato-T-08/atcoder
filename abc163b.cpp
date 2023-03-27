#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    long long sum=0;
    rep(i,m){
        int x;
        cin>>x;
        sum+=x;
    }
    if(sum>n){
        cout<<-1<<endl;
    }else{
        cout<<n-sum<<endl;
    }
}