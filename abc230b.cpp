#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t="";
    cin>>s;
    for(int i=1;i<=pow(10,5);i++){
        t+="oxx";
    }
    if(t.find(s)!=string::npos) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}