//-----------------find GCD(gretest common divisor)-----------------------------
#include<iostream>
using namespace std;

int main(){
    int m , n ;
    cout<<"Entr the value of m and n"<<endl;    
    cin>>m>>n;
    while(m!=n){
        if(m>n)
        m=m-n;
        else if(m<n)
        n=n-m;
    }
    cout<<"GCD is"<<m<<endl;
    
    return 0;
}
