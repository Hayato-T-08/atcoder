#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<int(s.size());i++){
        if(s[i]=='0'&&s[i+1]=='0'){
            i=i+1;
            cnt++;
        }else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
}