#include<iostream>
using namespace std;
int main(){
    int num,reversednum=0,originalnum,reminder;
    cout<<"enter the inetger:";
    cin>>num;
    originalnum=num;
    while(num!=0){
        reminder=num%10;
        reversednum=reversednum*10+reminder;
        num/=10;
    }
    if(originalnum == reversednum){
        cout<<originalnum<<"is a palindrome";
    }else{
        cout<<originalnum<<"is not a palindrome";
    }return 0;
}