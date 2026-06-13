#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter Input"<<endl;
    cin>>n;
    string hex = "";
    char hexadecimal[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while(n != 0) {
        int rem = n % 16;
        n = n / 16;
        hex = hexadecimal[rem] + hex;

    }

    cout<<"Hexadecimal: "<<hex<<endl;
}