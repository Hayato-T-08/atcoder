#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   map<string,int> Map;
    int ans=-1;
    string ans_s;
   for(int i=0;i<n;i++){
    string s;
    cin>>s;
    Map[s]++;
    if(ans<Map[s]) {
      ans_s=s;
      ans=Map[s];
    }
   } 
   cout<<ans_s<<endl;
}