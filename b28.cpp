#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> fib(n+1); 
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<=n;i++){
        long long sum;
        sum=fib[i-1]+fib[i-2];
        fib[i]=sum%1000000007;
    }
    cout<<fib[n]<<endl;
}