#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string a,b;
    cin>>a>>b;
    string c=a+b;
    int x=stoi(c);

    if(sqrt(x)==int(sqrt(x))){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;

}