#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    stack<string> query;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(x==1){
            string s;
            cin>>s;
            query.push(s);

        }
        else if(x==2){
            cout<<query.top()<<endl;
        }
        else{
            query.pop();
        }
    }
}