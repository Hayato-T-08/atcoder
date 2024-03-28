#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a1(n);
    for(auto& x:a1) cin>>x;

    int ans=0;
    for(int i=0;i<n;i++){
        bool fin=false;
        for(int a=1;a<143;a++){
            for(int b=1;b<143;b++){
                int ans_val=4*a*b+3*a+3*b;
                if(ans_val==a1[i]){
                    fin=true;
                    ans++;
                    break;
                }
                
            }
            if(fin) break;
        }
    }

    cout<<n-ans<<endl;
}