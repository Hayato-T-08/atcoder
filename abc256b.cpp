#include <bits/stdc++.h>
using namespace std;
int main(){
    int p=0;
    int n;
    cin>>n;
    vector<bool> masu(4,false);
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    for(int i=0;i<n;i++){
        masu[0]=true;
        for(int j=3;j>=0;j--){
            if(masu[j]){
                if(masu[j]){
                    int now=j+a[i];
                    if(now>3){
                        p++;
                        masu[j]=false;
                    }else{
                        masu[j]=false;
                        masu[now]=true;
                    }
                }
            }
        }
    }
    cout<<p<<endl;
}