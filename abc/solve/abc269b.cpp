#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<char>> st(10,vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>st[i][j];
        }
    }

    int a,b,c,d;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(st[i][j]=='#'){
                a=i+1;
                c=j+1;
                break;
            }
        }
    }

    for(int i=9;i>=0;i--){
        for(int j=9;j>=0;j--){
            if(st[i][j]=='#'){
                b=i+1;
                d=j+1;
                break;
            }
        }
    }
    cout<<b<<" "<<a<<endl;
    cout<<c<<" "<<d<<endl;

}