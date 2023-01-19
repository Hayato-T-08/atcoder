#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int l;
    int k;

    
for(int i=1;i<n;i++){
    k=0;
    l=0;
    while(l+i<=n-1){
        
        if(s[k]==s[k+i]){
            break;
        }
        
        k++;
        l++;
        
    }
    cout<<l<<endl;
}

}