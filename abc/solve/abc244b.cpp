#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string t;
    cin>>n>>t;
    int degree=90,size=t.size();
    int x=0,y=0;
    for(int i=0;i<size;i++){
        if(t[i]=='R'){
            degree+=90;
            degree%=360;
            continue;
        }
        if(degree==90){
            x++;
        }else if(degree==180){
            y--;
        }else if(degree==270){
            x--;
        }else if(degree==0){
            y++;
        }
    }

    cout<<x<<" "<<y<<endl;
}