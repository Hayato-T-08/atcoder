#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b){
    while (a>=1&&b>=1)
    {
        if(a>=b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a!=0) return a;
    else return b;
    
}
long long LCM(long long a,long long b){
    return a*b /GCD(a,b);
}
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<LCM(a,b)<<endl;
}