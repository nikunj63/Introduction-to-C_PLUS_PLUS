#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the numbers: ";
    cin>>num1>>num2;
    //display the numbers before swipping
    cout<<"before swipping"<<endl;
    cout<<"num1"<<num1<<"num2"<<num2<<endl;
    int tem =num1;
    num1=num2;
    num2=tem;
    //display the numbers after swiping
    cout<<"after swipping"<<endl;
    cout<<"num1: "<<num1<<"num2: "<<num2<<endl;
    return 0;
}