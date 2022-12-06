#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool is_prime(long long n) {  // is n prime or not
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int factorial3(int n)
{
    int IntArr[9999] = {0};
    IntArr[0] = 1;

    const int UB = sizeof(IntArr)/sizeof(int)-1;
    for (int I = 1; I <= 100; I++) {
        for (int J = 0; J <= UB; J++) {
            IntArr[J] *= I;
        }
        for (int J = 0; J <= UB-1; J++) {
            if (IntArr[J] >= 10) {
                IntArr[J + 1] += IntArr[J] / 10;
                IntArr[J] %= 10;
            }
        }
    }
    std::cout << std::accumulate(IntArr,IntArr+UB+1,0) << std::endl;
    return (n==1 || n==0) ? 1 : n * factorial3(n - 1);
}
int main(){
long long n;
cin>>n;
// cout<<n;
int ans;
if(is_prime(n)){
    cout<<n<<endl; 
    }
else{
    for(int i=0;i<n;i++){
        if(factorial3(i)%n==0){
            ans=i;
            // cout<<factorial3(i)<<endl;
            break;
        }
    }
    cout<<ans;
}

}