#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
    s="0"+s;
   for(int i=1;i<=int(s.size())/2;i++){
    char tmp;
    tmp=s[2*i];
    s[2*i]=s[2*i-1];
    s[2*i-1]=tmp;
   } 
    s.erase(0,1);
   cout<<s<<endl;
}