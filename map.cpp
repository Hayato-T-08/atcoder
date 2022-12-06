#include<map>
#include<iostream>
using namespace std;
int main(){
   //定義
   map<int,int> mp;
   //キーに値を代入
   mp[100]=2;
   cout<<mp[100]<<endl;
   //値の取得
   //値の列挙
   for(auto it =mp.begin();it !=mp.end();it++){
    cout<<it->first<<it->second<<endl;
   }
   //getting key it->first number it->second
}