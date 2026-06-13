#include <iostream>
using namespace std;

void reversestring(string str, int n) {
    if(n<0){
        return;
    }
    cout<<str[n];
    reversestring( str, n-1);
}
int main() {
    string str = "Priyanshu";
   
    reversestring(str, str.length() -1);

}