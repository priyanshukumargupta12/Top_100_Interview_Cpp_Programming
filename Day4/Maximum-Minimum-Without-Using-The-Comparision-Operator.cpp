#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter Two Input"<<endl;
    cin>>a>>b;
    int max = ((a+b) + abs(a-b))/2;
    int min = ((a+b) - abs(a-b))/2;

    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;

}