#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool flag=false;
    for(int i=a;i<=b;i++){
        int x;
        cin>>x;
        if(100%i==0){
            flag=true;
        }
    }
        if(flag){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}