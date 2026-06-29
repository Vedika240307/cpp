#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="cse";
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='e'){
            count++;
        }
    }
    cout<<count<<endl;
}