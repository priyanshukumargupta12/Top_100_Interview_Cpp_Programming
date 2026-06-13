#include <iostream>
using namespace std;

long long factorial(int n) {
    if(n==0 || n==1){ //Stop Recursion and prevent from infinite recurssion
        return 1 ;
    }
    else{
        return n* factorial (n-1);
    }

}

int main() {
    int n;
    cout<<"Enter Input Number That You Want To Find Factorial"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;

}