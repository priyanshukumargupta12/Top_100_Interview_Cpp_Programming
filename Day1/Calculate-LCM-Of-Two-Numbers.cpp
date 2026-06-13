#include <iostream>
using namespace std;

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
    cout<<"Enter Two Number That You Want To Find Number"<<endl;
    cin>>a>>b;
    gcd(a,b);
    long long LCM = (a * b) / result;
    cout<<LCM<<" "<<"LCM Of Two Number"<<endl;

}