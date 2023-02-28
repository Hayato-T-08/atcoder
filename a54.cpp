#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    map<string,int> Map;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(x==1){
            string s;
            int y;
            cin>>s>>y;
            Map[s]=y;
        }else{
            string s;
            cin>>s;
            cout<<Map[s]<<endl;
        }
    }
}