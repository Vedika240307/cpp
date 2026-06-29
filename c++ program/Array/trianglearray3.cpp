#include <iostream>
using namespace std;
int main(){
/*

    _ _ _ *
    _ _ * *
    _ * * *
    * * * *
*/
    int n=4;

    for(int i=1;i<=n; ++i){ // row-wise major loop
        // print the spaces
        for(int j=1; j<=n-i; ++j){
          cout<<" " ;
        }
        for(int k=1; k<=i; ++k){
            cout<<"*";
        }
     cout<<endl;
        }
    }
