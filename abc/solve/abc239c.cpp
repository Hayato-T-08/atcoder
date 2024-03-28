#include <bits/stdc++.h>
using namespace std;
// bool is_integer( double x ){
//   return std::floor(x)==x;
// }
// bool jug(double x1,double y1,double x2,double y2){
//     double distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
//     if(distance>2*sqrt(5)) return false;
//     else if(distance==2*sqrt(5)) return true;
//     else if(-2*sqrt(5)<distance&&distance<2*sqrt(5)) return true;
//     else if(distance==0) return true;
//     else if(distance<0) return false;
//     return false;
// }
// bool calc(double x1,double y1,double x2,double y2){
//     if(!jug( x1, y1, x2, y2)) return false;
//     else{
//         double a=2*(x2-x1),b=2*(y2-y1),c=((x1+x2)*(x1-x2)+(y1+y2)*(y1-y2));
//         double D=abs(a*x1+b*y1+c);
//         double a1,a2,b1,b2;
//         a1=(a*D-b*sqrt((pow(a,2)+pow(b,2))*5-pow(D,2)))/(pow(a,2)+pow(b,2))+x1;
//         b1=(b*D+a*sqrt((pow(a,2)+pow(b,2))*5-pow(D,2)))/(pow(a,2)+pow(b,2))+y1;
//         a2=(a*D+b*sqrt((pow(a,2)+pow(b,2))*5-pow(D,2)))/(pow(a,2)+pow(b,2))+x1;
//         b2=(b*D-a*sqrt((pow(a,2)+pow(b,2))*5-pow(D,2)))/(pow(a,2)+pow(b,2))+y1;
//         if(is_integer(a1)&&is_integer(a2)&&is_integer(b1)&&is_integer(b2) ) return true;
//         else return false;
//     }
    
// }
double dis(double x1,double y1,double x2,double y2){
    return pow(x1-x2,2)+pow(y1-y2,2);
}
int main(){
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    // if(calc(x1,y1,x2,y2)){
    //     cout<<"Yes"<<endl;
    // }else{
    //     cout<<"No"<<endl;
    // }
    for(double i=x1-2;i<=x1+2;i++){
        for(double j=y1-2;j<=y1+2;j++){
            if(dis(i,j,x1,y1)==dis(i,j,x2,y2)&&dis(i,j,x1,y1)==5)
            {
                cout<<"Yes"<<endl;
                return 0;
            }

            
        }
    }
                cout<<"No"<<endl;
            return 0;
    

}