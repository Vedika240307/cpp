#include <iostream>
using namespace std;
int sub(int a, int b) {
    return a - b;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int s = sub(a, b); 
    cout << "Sub: " << s << endl;
    return 0;
}