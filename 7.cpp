#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"LCM of"<<a<<"and"<<b<<"is"<<lcm(a,b);
    return 0;
}