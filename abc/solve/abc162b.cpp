#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    long long sum=0;
    rep3(i,1,n+1){
        if(i%3!=0 and i%5!=0) sum+=i;
    }
    cout<<sum<<endl;
}