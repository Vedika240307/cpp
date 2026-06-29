#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"before swaping a="<<a<<"b="<<b<<endl;
    int c=a;
    a=b;
    b=c;
    cout<<"After swaping a="<<a<<"b="<<b<<endl;
}