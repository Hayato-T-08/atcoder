#include <bits/stdc++.h>
using namespace std;
string  solve(int n){
    string s=to_string(n);
    map<int ,string> memo;
    if(memo.count(n)!=0) return memo[n];
    if(n==1) return "1";
    else{
        s=solve(n-1)+" "+s+" "+solve(n-1);
        memo[n]=s;
        return s;
    }    
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
}