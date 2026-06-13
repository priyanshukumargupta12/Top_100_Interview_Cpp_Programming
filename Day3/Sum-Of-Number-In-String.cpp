#include <iostream>
using namespace std;

int sum = 0;
int sumofstring(string str) {
    for(int i = 0; i < str.length(); i++) {
        if(str[i]>= '0' && str[i]<='9'){
            sum = sum + (str[i] -'0'); //This convert character to number --> Proper Integer digit milta hai
        }
        
    }
    return sum;
}
int main() {
    string str = "565678";
    cout<<sumofstring(str)<<endl;
}