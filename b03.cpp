#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int flag=false;
    vector<int> a;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n-2;i++){
        for (int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if((a[i]+a[j]+a[k])==1000){
                flag=true;
            }
            }
        }
    }
            if(flag){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}