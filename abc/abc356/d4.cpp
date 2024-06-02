#include<bits/stdc++.h>
#define mod 998244353

using namespace std;

long long f(long long j,long long n){
  long long p2=(1ll<<j); // 2^j
  long long k=n/(2*p2); //2^(j+1)で割り切れる回数 (k)
  long long res=k*p2;//k*2^(j+1)未満の数でj番目のbitが立っている数
  long long l=n%(2*p2);//k*2^(j+1)以上k*2^(j+1)+l以下の整数のうちj番目のbitが立っている数
  if(l>=p2){//マイナスになることはない
    res+=(l-p2+1);
  }
  return res;
}

int main(){
  long long n,m;
  cin >> n >> m;
  long long res=0;
  for(long long i=0;i<60;i++){
    if(m&(1ll<<i)){
      res+=f(i,n);
      res%=mod;
    }
  }
  cout << res << "\n";
  return 0;
}
