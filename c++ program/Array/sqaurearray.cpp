#include <iostream>
    using namespace std;
     int main() {
    int n1;
    int n2;
    cout<<"Enter number of rows:";
     cin>>n1;
    cout<<"Enter number of columns:";
    cin>>n2;
    for(int i = 1; i<=n1; i++) {
        for(int j =1; j<=n2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}