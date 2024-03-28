#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,x;
    cin>>n>>k>>x;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    long long sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    
    long long m=0;
    for(int i=0;i<n;i++){
        m+=a[i]/x;
 
    }
           m=min(m,k);
        sum-=m*x;
        k-=m;
    for(int i=0;i<n;i++){
        a[i]%=x;
    }
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++){
        if(k==0) break;
        sum-=a[i];
        k--;
    }
    cout<<sum<<endl;
}