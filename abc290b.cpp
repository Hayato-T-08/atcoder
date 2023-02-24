#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string res="";
    int t=0;
    for(int i=0;i<n;i++){
        
        if(t<k&&s[i]=='o'){
            res+='o';
            t++;
        }else{
            res+='x';
        }
    }
    cout<<res<<endl;
}