#include <bits/stdc++.h>
using namespace std;
long long Power(long long a,long long b,long long m){
    long long p=a,ans=1;
    for(int i=0;i<30;i++){
        long long wari=(1LL<<i);
        if((b/wari)%2==1) ans=(ans*p)%m;
        p=(p*p)%m;
    }
    return ans;
}
long long Div(long long a,long long b,long long m){
    return (a*Power(b,m-2,m))%m;
}
int main(){
    long long h,w;
    cin>>h>>w;
    long long n=h+w-2;
    long long r=w-1;
    long long a=1;
    long long b=1;
    const long long m=1000000007;
    for(int i=1;i<=n;i++) a=(i*a)%m;
    for(int i=1;i<=r;i++) b=(i*b)%m;
    for(int i=1;i<=n-r;i++) b=(i*b)%m;
    cout<<Div(a,b,m)<<endl;
}