#include<vector>
#include<iostream>
#include<string>
using namespace std;
void fizzBuzz(int n){
    for(int i=1;i<=n;i++){
        if(i % 3 == 0 && i%5 == 0 ){
            cout<<"Fizz Buzz"<<endl;
        }else if(i%3 == 0){
            cout<<"Fizz"<<endl;
        }else if(i%5 == 0){
            cout<<"Buzz"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
}
int main(){
    fizzBuzz(30);
}