// Take a string as user input and store the occurrence  of each character of the string in a map.
// Example:
// Input: "cabababcd"
// Output:
// { {a,3},{b,3},{c,2},{d,1}}

#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;
int main( ){
    map<char,int>map;
   string str;
   cout<<"Enter the string"<<endl;
   cin>>str;
   for (int i=0;i<str.length(); i++){
    if(str[i]==map[str[i]]++);
   }
   for(auto i:map){
    cout<<i.first<<","<<i.second<<endl;
   }
}
