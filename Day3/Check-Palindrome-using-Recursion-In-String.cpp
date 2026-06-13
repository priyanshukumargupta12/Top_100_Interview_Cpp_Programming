#include <iostream>
using namespace std;

string rev = "";
void palindromecheck(string str, int n) {
    if(n<0){
        return;
    }
    rev = rev + str[n];
    palindromecheck(str, n-1);
}

int main() {
    string str;
    cout<<"Enter Input String"<<endl;
    getline(cin, str);
    int n = str.length()-1;
    
    palindromecheck(str, n);

    if(str == rev) {
        cout<<"Given String Is Palindrome"<<endl;
    }
    else{
        cout<<"Given String Is Not A Palindrome"<<endl;
    }

}