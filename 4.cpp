#include<iostream>
using namespace std;
int main(){
    int num , reversedNum = 0, reminder;
    cout<<"enter the number";
    cin>>num;
    while(num!=0){
        reminder = num%10;
        reversedNum = reversedNum*10+reminder;
        num/=10;
    }
    cout<<"reversed number :"<<reversedNum;
    return 0;
}
   