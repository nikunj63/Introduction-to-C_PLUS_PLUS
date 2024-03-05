#include<iostream>
using namespace std;
int main (){
    float celsius , fahrenheit;
    cout<<"enter the temperature in fahrenheit";
    cin>>fahrenheit;
    celsius=(fahrenheit- 32)*5.0/9.0;
    cout<<"temperature in celsius is"<<celsius;
    return 0;
}