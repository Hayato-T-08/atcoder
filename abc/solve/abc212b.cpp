#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int> x1234,copy;
    for(int i=0;i<4;i++){
        x1234.push_back(x%10);
        x/=10;
    }
    reverse(x1234.begin(),x1234.end());
    copy=x1234;
    copy.erase(unique(copy.begin(),copy.end()),copy.end());
    int size=copy.size();
    if(size==1){
        cout<<"Weak"<<endl;
        return 0;
    }
    bool jug=true;
    for(int i=0;i<3;i++){
        if(x1234[i]==9){
            jug&=x1234[i+1]==0;
            continue;
        }
        jug&=(x1234[i+1]==(x1234[i]+1));
    }
    if(jug) cout<<"Weak"<<endl;
    else{cout<<"Strong"<<endl;}
    return 0;
}