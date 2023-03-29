#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
   int n;
   cin>>n;
   string s;
   cin>>s; 
   
   string t,t2;
    if(n%2==1){
        cout<<"No"<<endl;
        return 0;
    }
    t=s.substr(0,n/2);
    t2=s.substr(n/2);
    
    if(t==t2) 
{    cout<<"Yes"<<endl;
    return 0;}
    cout<<"No"<<endl;
    return 0;
}