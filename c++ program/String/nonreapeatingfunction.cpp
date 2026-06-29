#include <iostream>
using namespace std;
char nonRepeat(string str){
    for(int i=0; i<str.length(); i++){
        bool flag = false;
        for(int j=0;j<str.length(); j++){
            if(i==j){
                continue;
            }
            if(str[i]==str[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            return str[i];
        }
    }
    return '\0';
}

int main(){
string s="abcabd";
cout<<nonRepeat(s)<<endl;
}
