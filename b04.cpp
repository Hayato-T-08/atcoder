#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<8;i++){
        a.push_back(n%10);
        n=n/10;
    }
    int num=0;
 
    for(int i=0;i<a.size();i++){
        num+=pow(2,i)*a[i];
    }
    cout<<num;
}