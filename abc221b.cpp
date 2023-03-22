#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s==t){
        cout<<"Yes"<<endl;
        return 0;
    }
    for(int i=0;i<int(s.size())-1;i++){
        string s_swap=s;
        char tmp=s_swap[i];
        s_swap[i]=s[i+1];
        s_swap[i+1]=tmp;

        if(s_swap==t){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
    return 0;
}