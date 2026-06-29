#include<iostream>
using namespace std;
int main(){
    int a =24;
    cout<<&a<<endl;
    int *p=&a;
    cout<<&p<<endl;
    cout<<*p;
}