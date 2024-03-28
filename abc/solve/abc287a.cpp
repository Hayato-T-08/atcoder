#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ag=0;;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="For"){
            ag++;
        }
    }
    if((n+1)/2<=ag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}