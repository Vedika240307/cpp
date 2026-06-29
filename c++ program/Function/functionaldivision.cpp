#include <iostream>
using namespace std;
int division(int a, int b) {
    return a/b;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int d =  division(a, b); 
    cout << " division: " << d << endl;
    return 0;
}