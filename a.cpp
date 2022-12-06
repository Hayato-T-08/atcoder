#include<vector>
#include<iostream>
#include<string>
#include<cmath>
#include <limits>
using namespace std;
int main(){
    int a;
    cin>>a;
    double x;
    int y;
    y=cbrt(a);
    x=cbrt(a);
    if(x==y) {cout<<"YES";}else{
        cout<<"NO";
    }
}