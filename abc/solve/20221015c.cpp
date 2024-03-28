#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
int main(){
    int n;
    vector<int> num;
    vector<vectr<int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    vector<int> num2=num;
    sort(num.begin(),num.end());
    num.erase(unique(num.begin(),num.end()),num.end());
    for(auto x : num){
        cout<<x<<endl;
    }
for(int i=0;i<n;i++){
    a
}
}