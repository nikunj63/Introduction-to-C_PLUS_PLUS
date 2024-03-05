#include<iostream>
using namespace std;
int main(){
    float length,width, perimeter;
    cout<<"Enter length and width of thr rectangle:";
    cin>>length>>width;
    perimeter =2*(length+width);
    cout<<"Perimeter of the rectangle is :"<<perimeter;
    return 0;
}