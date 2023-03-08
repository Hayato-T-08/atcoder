#include <bits/stdc++.h>
using namespace std;
int main(){
    int h1,m1;
    cin>>h1>>m1;
    
    while(true){
        int a,b,c,d;
        a=int(h1/10);
        b=h1%10;
        c=int(m1/10);
        d=m1%10;
        int mis_h,mis_m;
        mis_h=a*10+c;
        mis_m=b*10+d;
        if((0<=mis_h&&mis_h<=23)&&(0<=mis_m&&mis_m<=59)) break;
        m1++;
        if(m1==60){
            m1=0;
            h1++;
        }

        if(h1==24) h1=0;
    }

    cout<<h1<<" "<<m1<<endl;
}