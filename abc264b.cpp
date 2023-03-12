#include <iostream>
using namespace std;

int main(void)
{
  int r, c;
  cin >> r >> c;
  
  if(max(abs(r-8), abs(c-8)) % 2) cout << "black" << endl;
  else cout << "white" << endl;
  
  return 0;
} 
