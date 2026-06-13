#include <iostream>
using namespace std;

int mul = 1;

int factorial(int n){
    
for(int i = 1; i<=n; i++){
        mul = mul * i;
}

};

int main() {
    int n; 
    cout<<"Enter Input To Find Factorial"<<endl;
    cin>>n;
    factorial(n);
    cout<<mul<<" "<<"Factorial Of Given Input"<<endl;
}