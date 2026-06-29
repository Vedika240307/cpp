#include<iostream>
#include<vector>
using namespace std;
vector<int>func(int a,int b){
    vector<int>ans(3);
    ans[0]=a;
    ans[1]=b;
    ans[2]=a+b;

    return ans;
}
int main(){
    int c=1,d=2;
    vector<int>v=func(c,d);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}