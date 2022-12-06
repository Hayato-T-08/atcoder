#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
int h,w;
    cin>>h>>w;
    vector<string> pic;
    for(int i=0;i<h;i++){
        string x;
        cin>>x;
        pic.push_back(x);
    }
    for(int i=0;i<w+2;i++){
        cout<<"#";
    }
    cout<<endl;
    for(int i=0;i<h;i++){
        cout<<"#"<<pic[i]<<"#"<<endl;
    }
    for(int i=0;i<w+2;i++){
        cout<<"#";
    }
}