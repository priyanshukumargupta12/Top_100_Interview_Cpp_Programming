#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter Octal Number Input"<<endl;
    cin>>n;
    int sum = 0;
    int power = 0;
    while(n >0) {
        int temp = n % 10;
        sum = sum + temp * pow(8 ,  power);
        power++;
        n = n / 10;
        
    }

    cout<<"Decimal: "<<sum<<endl;
}