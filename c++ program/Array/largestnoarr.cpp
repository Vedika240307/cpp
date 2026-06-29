#include<iostream>
using namespace std;
int main(){
    int arr[5]= {2,4,1,7,8};
    int largest = arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]>largest)
        largest=arr[i];
     }
      cout<<"largest Number:"<<largest<<endl;
      int SecondLargest=arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]==largest){
        continue;
    }
    if(arr[i]>SecondLargest){
        SecondLargest=arr[i];
    }
}
    cout<<"Second largest Number:"<<SecondLargest<<endl;
    int ThirdLargest=arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]==largest){
        continue;
    }
    if(arr[i]>ThirdLargest){
        ThirdLargest=arr[i];
    }
}
cout<<"Third largest Number:"<<ThirdLargest<<endl;
}