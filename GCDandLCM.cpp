#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
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
int LCM(int a,int b){
    return a*b /GCD(a,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
}