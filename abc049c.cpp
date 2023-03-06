#include <bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin>>S;
  regex reg(R"(     (dream|dreamer|erase|eraser)*     )");//正規表現
  bool YES = regex_match(S,reg);//完全一致検索,返り値はbool
  if(YES){
    cout << "YES" <<endl;
  }else{
    cout << "NO" <<endl;
  }
}