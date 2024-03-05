#include<iostream>
using namespace std;
int main(){
    int a ;
    int b;
    cout<<"enter the value"<<endl;
    cin>>a>>b;
    int c = a*b;
    cout<<c<<endl;
    if(c>=100){
        cout<<"pass"<<endl;
    }else if(c<=70){
        cout<<"fail"<<endl;
    }
  return 0;
}