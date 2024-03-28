#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    unsigned long long int a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f;
    unsigned long long int div=998244353;
    unsigned long long int mod_a,mod_b,mod_c,mod_d,mod_e,mod_f;
    mod_a=a%div;
    mod_b=b%div;
    mod_c=c%div;
    mod_d=d%div;
    mod_e=e%div;
    mod_f=f%div;
    unsigned long long int first,second;
    first = (mod_a*mod_b)%div;
    second = (mod_d*mod_e)%div;
    first=(first*mod_c)%div;
    second = (second*mod_f)%div;
    cout<<(div+first-second)%div<<endl;
}