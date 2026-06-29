#include <iostream>
using namespace std;
int main(){
    int currentspeed;
    int speedlimit;
    cout<<"enter currentspeed";
    cin>>currentspeed;
    if(currentspeed>=60+10){
        cout<<"you will get speeding ticket!";
    }else{
        cout<<"driving safely!";
    }
}