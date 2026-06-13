#include <bitset>
#include <iostream>
using namespace std;

int main() {
    int decimal = 7;
    bitset<32>binary(decimal); //bitset<32> --> matlab 32-bit ka binary number  binary(decimal) --> decimal value ko binary bit me convert karkai store kar deta hai
    cout<<"Binar Equivalent: "<<binary<<endl;
}