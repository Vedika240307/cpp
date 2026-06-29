#include <iostream>
using namespace std;
int greater(int a, int b) {
    return a/b;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

   if(int g =(a>b)){
    cout << " a is greater than b";
   }else{
   cout<<"b is greater than a";
   }
    return 0;}
