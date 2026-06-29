#include <iostream>
#include <String>
using namespace std;
int main(){
string str;
cout<<"Enter the string name:"<<endl;
cin>>str;
 cout << "Non-repeating characters are: ";
    for (int i = 0; i < str.size(); i++) {
       if( str.find(str[i])==str.rfind(str[i])){
        cout<<str[i]<<endl;
        }
       
     }
}
