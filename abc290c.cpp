#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  set<int> st;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    st.insert(a);
  }
  for(int i=0;i<k;i++){
    if(st.find(i)==st.end()){
      cout << i << "\n";
      return 0;
    }
  }
  cout << k << "\n";
  return 0;
}