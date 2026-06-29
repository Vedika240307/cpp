#include <iostream>
using namespace std;
int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int m = multiplication(a, b); 
    cout << "multiplication: " << m << endl;
    return 0;
}