#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int n1 =2;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << n1<< " ";
            n1 +=2;
        }
        cout << endl;
    }
}
    



