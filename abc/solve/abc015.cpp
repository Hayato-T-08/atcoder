#include<vector>
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
 int n;
 cin>>n;
double sum=0;
int cnt=0;
 for (int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x>0) cnt++;
    sum+=x;
 }   
 cout<<ceil(sum/cnt);
}