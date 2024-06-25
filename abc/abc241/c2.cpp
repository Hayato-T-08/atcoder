#include<bits/stdc++.h>
#define mod 998244353
#define inv2 499122177

using namespace std;

long long triangular_number(long long x){
  x%=mod;
  long long res=x;
  res*=(x+1);res%=mod;
  res*=inv2;res%=mod;
  return res;
}
// 1+2+3+...+x
int main(){
  long long n;
  cin >> n;
  
  long long res=0;//答え
  long long p10=10;//10^k
  for(int dg=1;dg<=18;dg++){
    long long l=p10/10;//10^(k-1)
    long long r=min(n,p10-1);//10^k-1の小さい方
    if(l<=r){res+=triangular_number(r-l+1);res%=mod;}
    //lからrまでの数の個数の総和を求める
    p10*=10;
  }
  
  cout << res << '\n';
  return 0;
}
