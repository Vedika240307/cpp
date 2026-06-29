#include <iostream>
using namespace std;
int sum(int a){
    int sum=a%2==0;
    return sum;
}
int main(){
    int a=0;
    cout<<"Enter the number";
    cin>>a;
    if (a%2==0){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}

