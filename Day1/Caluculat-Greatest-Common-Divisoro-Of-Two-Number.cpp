#include <iostream>
using namespace std;

//The Greatest Common Divisor (GCD) — also called Highest Common Factor (HCF) — is the largest number that divides both numbers exactly (without leaving a remainder).
// Find GCD of 12 and 18
// Divisors of 12 → 1, 2, 3, 4, 6, 12
// Divisors of 18 → 1, 2, 3, 6, 9, 18
// Common divisors = 1, 2, 3, 6
// GCD = 6

int result;
int gcd(int a , int b){
    if(a>b){
        result = b;
    }
    else{
        result = a;
    }

    while(result !=0) {
        if(a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    return result;

}
int main() {
    int a , b;
    cout<<"Enter Two Number"<<endl;
    cin>>a>>b;
    gcd(a,b);
    cout<<result<<" "<<"Greatest Common Factor Of Given Inputs"<<endl;
}