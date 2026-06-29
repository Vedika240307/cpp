//finding smallest and largest from the given array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={21,7,2,45,69};
    int smallestvalue=arr[0];
    int largestvalue=arr[0];
    for(int i=0; i<=4; i++){
        if(arr[i]<smallestvalue)smallestvalue=arr[i];
        if (arr[i]>largestvalue)largestvalue=arr[i];
    }
    cout<<smallestvalue<<endl;
    cout<<largestvalue<<endl;
}