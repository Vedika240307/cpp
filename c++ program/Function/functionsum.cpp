#include <iostream>
using namespace std;
int a=1;
int b=2;
int sum(int a, int b){
    int sum=a+b;
    return sum ;
}
int main(){
    int s= sum(1 ,2);
    cout<<s;
}