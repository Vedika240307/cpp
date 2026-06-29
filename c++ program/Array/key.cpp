#include <iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0; i<8; i++){
        if (arr [i] ==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[8]={2,4,6,8,10,12,14,16};
    int key = 21;
    if(search(arr,8,key) ){
        cout<<"Found in array."<<endl;
    }else{
        cout<<"Not found in array."<<endl;
    }
    return 0;
}