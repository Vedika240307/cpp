#include <iostream>
using namespace std;
int main(){
    int currentspeed;
    int speedlimit;
    cout<<"enter your currentspeed:";
    cin>>currentspeed;
    if(currentspeed>=speedlimit+10){
        cout<<"you will get speeding ticket!";
    }else{
        cout<<"driving safely!";
    }
}