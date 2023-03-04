#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> num(n);
    for(long long i=1;i<=n;i++){
        long long cnt=0;
        for(long long j=1;j*j<=i;j++){
            if(i%j==0) cnt++;
            if(i/j !=j) cnt++;
        }
        num[i]=cnt;
    }

    long long ans=0;
    for(long long i=1;i<=n-1;i++){
        long long c1,c2;
        if(num[i]==1){
            c1=1;
        }else{
            c1=num[i]*(num[i]-1)/2;
        }
        if(num[n-i]==1){
            c2=1;
        }else{
            c2=num[n-i]*(num[n-i]-1)/2;
        }
        ans+=(c1+c2);
    }
    cout<<ans<<endl;
}