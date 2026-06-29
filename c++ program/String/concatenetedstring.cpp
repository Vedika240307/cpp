#include <iostream>
#include <String>
using namespace std;
string concatenatedString( string str1, string str2){
return str1+str2;
}
int main(){
    string str1;
    cout<<"Enter the string 1"<<endl;
    cin>>str1;
    string str2;
    cout<<"Enter the string 2"<<endl;
    cin>>str2;
    string S= str1+str2;
    cout<<S<<endl;
    return 0;
}
