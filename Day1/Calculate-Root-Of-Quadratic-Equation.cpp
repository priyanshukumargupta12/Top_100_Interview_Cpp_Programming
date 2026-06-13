#include <iostream>
#include <math.h>
using namespace std;

int Root (int a , int b, int c) {
    if(a == 0){
        cout<<"a should not be zero"<<endl;
    }
    else{
        int D;
        D = b*b - 4*a*c;

        double sqrt_val = sqrt(abs(D));

        if(D>0){
            cout<<"Roots Are Real And Different"<<endl;
            cout<<(double)(-b + sqrt_val) / 2 * a<<endl;
            cout<<(double)(-b - sqrt_val) / 2 * a<<endl;
        }
        else if(D == 0) {
            cout<<"Roots Are Real And Same"<<endl;
            cout<<-(double)b / 2 * a<<endl;
        }
        else {
            cout<<"Roots Are Imaginary"<<endl;
            cout<<-(double)(-b + sqrt_val) / 2 * a<<" +i"<<endl;
            cout<<-(double)(-b - sqrt_val) / 2 * a<<" -i"<<endl;
        }

    }
}
int main() {
    int a, b, c;
    cout<<"Enter Three Input To Root Of Quadratic Equation"<<endl;
    cin>>a>>b>>c;
    Root(a , b , c);

    return 0;
}