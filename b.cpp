#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num;
    int n,q;
    vector<int> s;
    vector<int> t;
    vector<int> l;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l.push_back(x);
        for(int j=0;j<x;j++){
            int y;
            cin>>y;
            num.push_back(y);
        }
    }

    for(int i=0;i<q;i++){
        int x;
        int y;
        cin>>x>>y;
        s.push_back(x);
        t.push_back(y);
    }

    int index=0;
    int sum=0;
    int id;
    for(int i=0;i<q;i++){
        index=s[i]-1;
        sum=0;
        id=0;
        if(index==0){
            id = t[i];
        }else{
            for(int j=0;j<index;j++){
                sum+=l[j];
                
            }
            id=sum+t[i];
        }
        cout<<num[id-1]<<endl;
    }
}