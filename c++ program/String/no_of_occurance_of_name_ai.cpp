#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "vedika,sakshi,siddhi,sakshi,vedika";
    int start = 0, end = 0;
    string names[10]; 
    int count[10] = {0}; 
    int n = 0; 
    while (end <= str.length()) {
        if (end == str.length() || str[end] == ',') {
            string temp = str.substr(start, end - start);
            int i;
            for(i = 0; i < n; i++) {
                if(names[i] == temp) {
                    count[i]++;
                    break;
                }
            }
            if(i == n) { 
                names[n] = temp;
                count[n] = 1;
                n++;
            }
            start = end + 1;
        }
        end++;
    }
    for(int i = 0; i < n; i++) {
        cout << names[i] << " : " << count[i] << endl;
    }
}
