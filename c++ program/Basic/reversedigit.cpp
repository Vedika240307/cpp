#include<iostream>
using namespace std;
int main(){       
    int a;
    cout<<"enter the number:";
    cin>>a;
    while(a>0){
        int number=a%10;
        a=a/10;
        cout<<number<<endl;
    }
    }

