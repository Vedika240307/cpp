#include <iostream>
using namespace std;

int add() {
    int n, total = 0, num;
    cout << "a+b ";
    cin >> n;

    cout << "a+b " << n << " numbers:";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        total += num;
    }
    return total;
}

int main() {
    int result = add();  
    cout << "add: " << result << endl;
    return 0;
}



