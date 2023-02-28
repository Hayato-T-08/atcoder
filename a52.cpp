#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<string> order;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(x==1){
            string s;
            cin>>s;
            order.push(s);
        }else if(x==2){
            cout<<order.front()<<endl;
        }
        else{
            order.pop();
        }
    }
}