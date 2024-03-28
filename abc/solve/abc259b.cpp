#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
int main(){
    int a,b,d;
    cin>>a>>b>>d;
    cout<<setprecision(16)<<a*cos(d*PI/180)-b*sin(d*PI/180)<<" "<<a*sin(d*PI/180)+b*cos(d*PI/180)<<endl;
}