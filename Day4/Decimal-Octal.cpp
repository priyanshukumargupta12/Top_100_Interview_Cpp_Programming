#include <iostream>
using namespace std;

int main () {
    int decimal;
    cout<<"Enter Input"<<endl;
    cin>>decimal;
    int octal = 0;
    int place = 1;
    while(decimal != 0) {
        int rem = decimal % 8;
        decimal = decimal / 8;
        octal = octal + rem *place;
        place = place * 10;
    }
    cout<<"Octal: "<<octal<<endl;
}