#include <iostream>
using namespace std;
bool isOdd(int a){
    return a%2==1;
}
int main(){
    int a=0;
    cout<<"Enter the number";
    cin>>a;
    if (isOdd(a)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}

