#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    int f=n%16;
    int s=n/16;
    if(s==0){
            if(f<10){
       cout<<0<<f<<endl; 
    }else{
        if(f==10){
            cout<<0<<"A"<<endl;
        }
        else if (f==11)
        {
            cout<<0<<"B"<<endl;
        }
        else if (f==12)
        {
            cout<<0<<"C"<<endl;
        }
        
        else if (f==13)
        {
            cout<<0<<"D"<<endl;
        }
        
        else if (f==14)
        {
            cout<<0<<"E"<<endl;
        }

        else if (f==15)
        {
            cout<<0<<"F"<<endl;
        }
    }
    }else{
         if(s<10){
       cout<<s; 
    }else{
        if(s==10){
            cout<<"A";
        }
        else if (s==11)
        {
            cout<<"B";
        }
        else if (s==12)
        {
            cout<<"C";
        }
        
        else if (s==13)
        {
            cout<<"D";
        }
        
        else if (s==14)
        {
            cout<<"E";
        }

        else if (s==15)
        {
            cout<<"F";
        }


    }
    if(f<10){
        cout<<f<<endl;
    }else{
                if(f==10){
            cout<<"A"<<endl;
        }
        else if (f==11)
        {
            cout<<"B"<<endl;
        }
        else if (f==12)
        {
            cout<<"C"<<endl;
        }
        
        else if (f==13)
        {
            cout<<"D"<<endl;
        }
        
        else if (f==14)
        {
            cout<<"E"<<endl;
        }

        else if (f==15)
        {
            cout<<"F"<<endl;
        }

    }
    }
}