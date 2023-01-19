#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
  
    int a,b;
    cin>>a>>b;
a=a-1;
b=b-1;
    if(2*a+1==b || 2*a+2==b){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}