#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int> num;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    int max;
    max=num[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(max<num[i]){
            max=num[i];
            index=i;
        }
    }
    cout<<index+1<<endl;

}