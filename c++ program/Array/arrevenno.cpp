#include <iostream>
using namespace std;

int main() {
    int arr[9]; 
    for(int i = 0; i<=8; i++) {
        arr[i] = (i + 1) * 2;
        cout << arr[i] << endl;
    }
}