#include <iostream>
#include <cmath>
using namespace std;

int main () {
    string hex;
    cout<<"Enter The Hexadecimal Number"<<endl;
    cin>>hex;

    int n = hex.length() -1;
    int decimal = 0;
    int value;
    int power = 0;
    for(int i = n; i>=0; i--) {
        char ch = hex[i];
        if(ch>= '0' && ch <= '9'){
            value = ch - '0';
        }
        else if(ch >= 'A' && ch <= 'F'){
            value = ch - 'A' + 10;
        }
        else if(ch >= 'a' && ch <= 'f'){
            value = ch - 'a' + 10;
        }
        decimal = decimal + value * pow(16 , power);
        power++;
    }

    cout<<"Decimal: "<<decimal<<endl;
}