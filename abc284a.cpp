#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }
    for(int i=n-1;i>-1;i--){
        cout<<a[i]<<endl;
    }
}