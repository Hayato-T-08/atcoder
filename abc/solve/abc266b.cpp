#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long num=998244353;
    long long x;
    for(int i=0;i<num;i++){
        long long k=n-i;
        if(k%num==0){
            x=i;
            break;
        }
    }

    cout<<x<<endl;

}