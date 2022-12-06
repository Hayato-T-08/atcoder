#include<iostream>
#include<vector>
#include<cmath>
#include <iomanip>
#include <limits>
using namespace std;
float round_n(unsigned long long int x, double n)
{
    float number=x;
    cout<<setprecision(64);
    number = number * pow(10,n-1); //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number); //小数点以下を四捨五入する。
    number /= pow(10, n-1); //10の(n-1)乗で割る。
    x=number;
    return x;
}
int main(){
    int k;
    unsigned long long int x;
    cin>>x>>k;
    for(int i=0;i<k;i++){
        x=round_n(x,-i);
    }
    cout<<x<<endl;
}