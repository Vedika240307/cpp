#include <iostream>
using namespace std;
int main(){
    string str ="abcab";
    for(int i = 0; i < str.length(); i++) {
         bool flag = false;
    for(int j=0 ;j< i; j++){
        if(str[i]==str[j]){
        flag = true;
        break;
    }
}
            if(!flag) {
             int count = 0;
             for(int j = 0; j < str.length(); j++) {
                 if(str[i] == str[j]) {
                     count++;
                }
            }
            cout << str[i]<<" : " << count << endl;
         }
     }
     return 0;
    }

    











