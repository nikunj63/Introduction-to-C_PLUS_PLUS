#include<iostream>
using namespace std;
int main(){
    cout<<"please enter the values"<<endl;
    int p;
    long q;
    float r;
    double s;
    cin>>p>>q>>r>>s;
    double c=(100*(1-p*q)/(q+r))-((p+r)/s/(s+p));
    cout<<c<<endl;
    return 0;

}