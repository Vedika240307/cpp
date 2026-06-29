#include <iostream>
#include <string>
using namespace std;
int main(){
    string day;
    cout<<"Enter the day:";
    cin>>day;
    for (int i=0;i<day.length();i++){day[i]= tolower(day[i]);
    }
if(day=="saturday"||day=="sunday"){
    cout<<day<<"is a holiday";
}else if (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"){
    cout<<day<<"is a working day ";
}

}