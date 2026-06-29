#include <iostream>
using namespace std;
int sum(int n){
return n*(n+1)/2;
}
int main(){
    cout<<sum(5)<<endl;
    cout<<sum(31)<<endl;
    cout<<sum(53)<<endl;
    cout<<sum(62)<<endl;
    cout<<sum(28)<<endl;
    cout<<sum(24)<<endl;
    return 0;
}