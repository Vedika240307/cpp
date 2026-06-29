#include <iostream>
using namespace std;
int factorial( int n, int multi=1){
    for(int i=1;i<=n;i++)
        multi=multi*i;
        return multi;
        }
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Factorial: " << factorial(n) << endl;
    return 0;

}