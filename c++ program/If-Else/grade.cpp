#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number";
    cin>>a;
    if(a>=90){
       cout<<"Grade A"; 
    }else if (a>=75 && a<=89){
        cout<<"Grade B";
    }else if (a>=50&&a<=74){
        cout<<"Grade C";
    }else{
        cout<<"Grade F";
    }
}