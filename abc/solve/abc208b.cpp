#include <bits/stdc++.h>
using namespace std;

int func(int n){
    if(n==1) return 1;
    return func(n-1)*n;
}

int main(){
    int p;
    cin>>p;
    int ans=0;
    for(int i=10;i>=1;i--){
        int div=func(i);
        int a=p/div;
        ans+=a;
        p-=div*a;
    }

    cout<<ans<<endl;
}