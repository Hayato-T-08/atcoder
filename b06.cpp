#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num;
    vector<int> a;
    int n,q;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        num.push_back(sum);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        int total=r-l+1;
        int atari=num[r-1]-num[l-2];
        int hazure=total-atari;
        
        if(atari>hazure){
            cout<<"win"<<endl;
        }
        else if (atari<hazure)
        {
            cout<<"lose"<<endl;
        }
        else{
            cout<<"draw"<<endl;
        }
        
    }
}