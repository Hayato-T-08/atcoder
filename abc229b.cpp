#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,b;
  cin >> a >> b;
  while(a>0 && b>0){
    if((a%10)+(b%10)>=10){cout << "Hard\n";return 0;}
    a/=10;b/=10;
  }
  cout << "Easy\n";
}