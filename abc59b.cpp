#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string a,b;
    cin>>a>>b;
    vector<int> a1,b1;
    rep(i,a.size()) a1.push_back(a[i]-'0');
    rep(i,b.size()) b1.push_back(b[i]-'0');


    if(a1.size()<b1.size()) cout<<"LESS"<<endl;
    else if(a1.size()>b1.size()) cout<<"GREATER"<<endl;
    else{
        rep(i,a1.size()){
            if(a1[i]>b1[i]){
                cout<<"GREATER"<<endl;
                return 0;
            }
            if(a1[i]<b1[i]){
                cout<<"LESS"<<endl;
                return 0;
            }
        }

        cout<<"EQUAL"<<endl;
        return 0;
    }
}