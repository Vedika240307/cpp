#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;
int main( ){
    map<int,int>map;
   map[1]=1;
   map[2]=4;
   map[3]=9;
   map[4]=16;
   for(auto i:map){
    cout<<i.first<<": "<<i.second<<endl;
   }
}