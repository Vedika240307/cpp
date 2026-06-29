#include<iostream>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a=1,b=2;
     b=add(a,b);
    cout<<b;
}





#include<iostream>
using namespace std;
int add(int a, int b){
int sum=a+b;
return sum;
}
void addByReference(int*a, int*b){       //there are 2 pointers a and b
cout<<a<<""<<b<<endl;
    *a=*a +*b;
}
int main(){
    int a=1, b=2;
   //cout<<a<<""<<b<<endl;
    addByReference(&a, &b);
    cout<<a<<""<<b<<endl;
}