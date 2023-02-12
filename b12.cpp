#include <bits/stdc++.h>
using namespace std;
int n;
double f(double x){
    return pow(x,3)+x;
}
int main(){
    cin>>n;
    double L=0,R=100;
    double M;
    while(R-L>0.001){  
        M=(L+R)/2;
        if(n<=f(M)) R=M;
        if(n>f(M)) L=M;
    }
    cout<<M<<endl;
}