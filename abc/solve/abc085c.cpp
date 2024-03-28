#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long y;
    cin>>n>>y;
    int a,b,c;
    for(int a=0;a<=n;a++){
        for(int b=0;b<=n;b++){
            int c=n-(a+b);
            if(c>=0){
                if(10000LL*a+5000LL*b+c*1000LL==y){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    return 0;
            }
            }
        }
    }
    printf("-1 -1 -1\n");
    return 0;
}