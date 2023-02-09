#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        if(y==x){
            flag=true;
        }
    }
    if(flag){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}