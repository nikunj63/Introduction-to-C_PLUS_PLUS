#include<iostream>
using namespace std;
int main(){
    int a=5,b=3,d=15;
    float f;
    f=a+b/a;
    cout<<f<<endl;
    int c;
    c=d*a+b;
    cout<<c<<endl;
    c=(a++)*d+a;
    cout<<c<<endl;
    f=(++b)*b-a;
    cout<<f<<endl;
    c=a-(b++)*(--a);
    cout<<c<<endl;
    return 0;
    
}