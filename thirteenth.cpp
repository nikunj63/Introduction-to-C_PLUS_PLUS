#include<iostream>
using namespace std;
int main(){
    cout<<"please enter the values of x= ,y= , w= ,z= ,p= ,q= "<<endl; 
    int x;
    long y;
    float w;
    double z;
    short p;
    long double q;
    cin>>x>>y>>w>>z>>p>>q;
    cout<<(2*x+3*y/5*w+6*z + 8*p/5*q)*(2*x+3*y/5*w+6*z + 8*p/5*q)*(2*x+3*y/5*w+6*z + 8*p/5*q)*(2*x+3*y/5*w+6*z + 8*p/5*q)<<endl;
    return 0;
}