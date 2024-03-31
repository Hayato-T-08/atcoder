#include<iostream>
#include<vector>
#include<string>
using namespace std;

string fizzBuzz(int num){
    if(num%15==0){
        return "FizzBuzz";
    }else if(num%3==0){
        return "Fizz";
    }else{
        return "BUzz";
    }
}

int main(){
    for(int i=0;i<100;i++){
        cout<<fizzBuzz(i)<<endl;
    }
}