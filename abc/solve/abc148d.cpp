#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int cnt=0;
    int jug=1;
    for(int i=0;i<n;i++){
        
        if(a[i]==jug){
            jug++;
            cnt++;
        }
    }
    if(cnt==0){
        cout<<-1<<endl;
    }else{
        cout<<n-jug+1<<endl;
    }
}