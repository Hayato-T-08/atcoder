#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int tmp=n,sum=0;
    while (tmp>0)
    {
       sum+=tmp%10;
       tmp/=10;
    }
    if(n%sum==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
}