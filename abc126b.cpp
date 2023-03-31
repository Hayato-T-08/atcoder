#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    int x,y;
    x=stoi(s.substr(0,2));
    y=stoi(s.substr(2,2));
    if(x<=12 and x>=1 and y>=1 and y<=12){
        cout<<"AMBIGUOUS";
    }
    else if(not (x<=12 and  x>=1) and y>=1 and y<=12){
        cout<<"YYMM"<<endl;
    }else if(x<=12 and x>=1 and not (y>=1 and y<=12)){
        cout<<"MMYY"<<endl;
    }else{
        cout<<"NA"<<endl;
    }
}