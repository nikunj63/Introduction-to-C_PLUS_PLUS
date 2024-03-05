#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number : ";
    cin>>number;
    if(number>0){
        cout<<"the number is positive: "<<number;
    }else if ( number<0){
        cout<<"the number is negative: "<<number;
    }else{
        cout<<"the number is zero"<<endl;
    }
}