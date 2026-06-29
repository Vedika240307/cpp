#include <iostream>
using namespace std;
int main(){
    int num[12]={0,1,1,0,0,0,1,1,1,1,0,1};
    int largecount =1, count=1;
    for(int i=1; i<=11; i++){
        if (num[i]==num[i-1])count++;
        else{
            if(count>largecount)largecount=count;
            count=1;
        }
    }
    if(count>largecount)largecount=count;
    cout<<largecount<<endl;
    }
