#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,21,35,45,35,21,1};
    for(int i = 0; i<7; i++) {
         bool flag = false;
    for(int j=0 ;j< i; j++){
        if(arr[i]==arr[j]){
        flag = true;
        break;
    }
}
      if(!flag) {
             int count = 0;
             for(int j = 0; j <7; j++) {
                 if(arr[i] == arr[j]) {
                     count++;
                }
            }
            cout << arr[i] << " : "<< count << endl;
         }
     }
     return 0;
    }