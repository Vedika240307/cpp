#include<iostream>
using namespace std ;
int main(){
    int arr[10];
    int num=1;
    for(int i=0; i<=9; i++){
        arr[i]=num;
        num +=2;
    cout<<arr[i]<<endl;
    }
}