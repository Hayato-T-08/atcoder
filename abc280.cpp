#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<string> koma;
    for(int i=0;i<h;i++){
            string a;
            cin>>a;
            koma.push_back(a);
        
    }
    int cnt=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char s;
            s=koma[i][j];
            if(s=='#'){
                cnt++;
            }
        }
    }
    cout << cnt<<endl;
}