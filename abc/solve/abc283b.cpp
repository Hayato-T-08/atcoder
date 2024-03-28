#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    a.push_back(0);
    for(int i=1;i<n+1;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    // for(auto x:a){
    //     cout <<x;
    // }   
     int q;
    cin>>q;
    // cout<<q<<endl;
   vector<int> num;
    for(int i=0;i<q;i++){
         int x,y,z;
        cin>>x;

        if(x==1){
            cin>>y>>z;
            a[y]=z;
        }
        else if(x==2){
            cin>>y;
            num.push_back(a[y]);
        }

        }
        for(auto x:num){
            cout<<x<<endl;
        }
    }

    

