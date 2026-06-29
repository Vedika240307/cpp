#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int multi=1;
    for(int i=1;i<=n;i++){
        multi=multi*i;
    }
    cout<<multi;
}