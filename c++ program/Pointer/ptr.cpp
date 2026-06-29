#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;

    cout << "var";
    cout << "&var" ;
    cout << "ptr"; 
    cout <<  *ptr; 
}
