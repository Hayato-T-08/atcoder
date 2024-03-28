#include<vector>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int cnt=x;
    for (int i=0;i<y-1;i++){
        cnt*=x;
    }
    cout<<cnt;
}