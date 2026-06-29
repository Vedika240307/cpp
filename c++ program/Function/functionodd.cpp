#include <iostream>
using namespace std;
bool isOdd(int n){
    if(n%2==1)
    return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<isOdd(n);
}