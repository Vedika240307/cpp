#include <iostream>
using namespace std;
int main(){
    int a=0;
    cout<<"enter the value";
    cin>>a;
    if(a%100==0 && a%400==0)
    {
        cout<<"This is a leap year";
    }else{
        cout<<"This is not a leap year";
    }
}