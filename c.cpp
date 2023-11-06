#include<vector>
#include<iostream>
#include<string>
using namespace std;
int rev(int x){
    vector<int> num;
    int tmp = x;
    int cnt = 0;
    int ans;
    while(tmp != 0){
        cnt++;
        tmp /= 10;
    }
    
    for(int i=0;i<cnt;i++){
        int a;
        num.push_back(x%10);
        x/=10;
    }

    for(auto x:num){
        cout<<x<<endl;
    }
    return 0;
}

int main(){
    cout<<rev(123)<<endl;;
}