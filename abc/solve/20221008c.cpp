#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    
    vector<int> num;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    int even_max=-1;
    int even_max2=-1;
    int odd_max1=-1;
    int odd_max2=-1;
    for(int i=0;i<n;i++){
        if(num[i]%2==0&&even_max<num[i]){
            even_max=num[i];
        }
    }
    for(int i=0;i<n;i++){
        if(num[i]%2==0&&even_max2<num[i]){
            if(num[i]!=even_max){
            even_max2=num[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        if(num[i]%2!=0&&odd_max1<num[i]){
            odd_max1=num[i];
        }
    }
    for(int i=0;i<n;i++){
        if(num[i]%2!=0&&odd_max2<num[i]){
            if(num[i]!=odd_max1){
            odd_max2=num[i];
        }
        }
    }

    if((odd_max1==-1||odd_max2==-1)&&(even_max==-1||even_max2==-1)){
        cout<<-1<<endl;
    }
    else if((odd_max1==-1||odd_max2==-1)&&(even_max!=-1&&even_max2!=-1)){
        cout<<even_max2+even_max<<endl;
    }
    else if((even_max==-1||even_max2==-1)&&(odd_max1!=-1&&odd_max2!=-1)){
        cout<<odd_max1 + odd_max2<<endl;
    }
    else{
        if(odd_max1+odd_max2>even_max+even_max2){
            cout<<odd_max1 + odd_max2<<endl;
        }else{
            cout<<even_max2+even_max<<endl;
        }
    }
}