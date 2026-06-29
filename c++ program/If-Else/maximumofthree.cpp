#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the integer value"<<endl;
    cin>>a>>b>>c;
    int max;
    if(a>=b && b>=c){
    max=b;}
    else if(b>=a && b>=c){
    max=b;}
else{
    max=c;
    cout<<"maximum number is"<<max;
}
}