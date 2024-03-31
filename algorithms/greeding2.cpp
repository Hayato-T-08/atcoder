#include<iostream>
#include <algorithm>
#include<vector>
#include<tuple>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<tuple<int,int>> time;
    time.resize(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        time.emplace_back(a,b);
    }
    
    
    
}