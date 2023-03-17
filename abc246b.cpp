#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    double x,y,dis=0;
    dis=sqrt(a*a+b*b);
    x=a/dis;
    y=b/dis;
    cout<<setprecision(16)<<x<<" "<<y<<endl;
}