#include <iostream>
using namespace std;
int func(int n){
    cout<<n<<endl;
    return n;
}
int main(){
    int n= 5;
    cout<<func(n);
}
// double print 1st 5 bcoz of func cout and 2nd bcoz of main cout
