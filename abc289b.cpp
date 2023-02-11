#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> num;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    

    int i=0;
    vector<int> order;
if(num.empty()){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
else{
        while (i<n)
    {
        
       
                    
            
            if(num[i]+1==num[i+1]){
                order.push_back(num[i]);
                
                i++;
               
            }
            else if(i==n-1){
                order.push_back(num[i]);
                reverse(order.begin(),order.end());
                i++;
                for(auto k:order){
                 cout<<k<<" ";
                }
                

            }
            else{
                order.push_back(num[i]);
                order.push_back(num[i]+1);
                reverse(order.begin(),order.end());
                i++;
                for(auto k:order){
                cout<<k<<" ";
            }

            order.erase(order.begin(),order.end());
            
            

        }
    }
}

    
}