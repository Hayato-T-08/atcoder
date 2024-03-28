#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    cout<<"? 2"<<endl;
    int s2;
    cin>>s2;
    if(s2==1){
        cout<<"! 1"<<endl;
        return 0;
    }

    int sn_1;
    cout<<"? "<<n-1<<endl;
    cin>>sn_1;
    if(sn_1==0){
        cout<<"! "<<n-1<<endl;
        return 0;
    }

}