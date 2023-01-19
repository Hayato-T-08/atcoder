#include<vector>
#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long id=0;
    long long k;
    long long m;
    reverse(s.begin(), s.end());
    for(int i=0;i<int(s.length());i++){
        k=pow(26,i);
        m=(long long)s[i]-64;
        id=id+m*k;
    }
    cout<<id;
}