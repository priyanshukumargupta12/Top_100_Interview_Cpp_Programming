#include <iostream> 
using namespace std;

int main() {
    string str = "level";
    string rev = "";
    for(int i = str.length() -1; i>=0; i--) {
        rev = rev + str[i];
    }

    if(str == rev) {
        cout<<rev<<" "<<"Given String Is Palindrome"<<endl;
    }
    else{
        cout<<"Given String Is Not Palindrome"<<endl;
    }
}