#include<iostream>
using namespace std;
int main() {
    cout<<"please enter the values"<<endl;
    float h,b,s1,s2,s3;
    cin>>h>>b>>s1>>s2>>s3;
    float area,perimeter;
    area=(0.5)*h*b;
    cout<<area<<endl;
    perimeter=s1+s2+s3;
    cout<<perimeter<<endl;
    return 0;
}