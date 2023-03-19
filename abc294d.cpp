#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    priority_queue<int,vector<int>,greater<int>> cus,non_cus;
    set<int> customer;
    for(int i=1;i<=n;i++) cus.push(i);
    
    for(int i=0;i<q;i++){
        int event;
        cin>>event;
        if(event==1){
            int call=cus.top();
            cus.pop();
            customer.insert(call);
        }else if(event==2){
            int x;
            cin>>x;
            customer.erase(x);
        }else{
            auto itr=customer.begin();
            cout<<*itr<<endl;
        }
    }
}