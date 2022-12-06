#include<iostream>
#include<vector>
using namespace std;
int fun(int x){

    if(x==0){
        return 1;
    }else{
        int y=x*fun(x-1);
        return y;
    }
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    sum = fun(n);
    cout<<sum<<endl;
}