#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> num;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    int a1=num[0];
    vector<int> ans;
    ans.push_back(a1);
    for(int i=1;i<n;i++){
            int y;
            y=num[i];
        for(int j=0;j<i;j++){
            y=y-ans[j];
        }
        ans.push_back(y);
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<"\n";
}