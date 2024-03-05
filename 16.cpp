#include<iostream>
using namespace std;
int main(){
    int a , b;
    //input two numbers from user
    cout<<"Enter two numbers to swap:";
    cin>>a>>b;
    //displaying the numbers before swapping
    cout<<"before swapping: a = "<<a<<" b="<<b<<endl;
    //swapping without temporary variable
    a = a+b;
    b = a-b;
    a = a-b;
    //displaying the numbers after swapping
    cout<<"after swapping : a = "<<a<<",b="<<b<<endl;
    return 0;
}