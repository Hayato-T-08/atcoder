#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<10;i++){
        a.push_back(n%2);
        n=int(n/2);
        
    }
    reverse(a.begin(),a.end());
    for(auto x:a){
        cout<<x;
    }
}