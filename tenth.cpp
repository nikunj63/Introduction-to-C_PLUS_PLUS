#include<iostream>
using namespace std;
int main(){
    cout<<"please enter the value"<<endl;
    int n;
    cin>>n;
    int x=2;
    for(int i=1; i<=n; i++){
        x=x*i;
        cout<<x<<endl;

    }
return 0;
}