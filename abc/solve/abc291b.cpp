#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> x(5*n);
    for(int i=0;i<5*n;i++) cin>>x[i];
    sort(x.begin(),x.end());

    x.erase(x.begin(),x.begin()+n);
    x.erase(x.begin()+3*n,x.end());


    double ans=0;
    for(int i=0;i<int(x.size());i++){
        ans+=x[i];
    }
    cout<<ans/double(x.size())<<endl;
}