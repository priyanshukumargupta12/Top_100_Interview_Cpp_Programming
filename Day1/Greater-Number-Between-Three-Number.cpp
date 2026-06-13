#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    cout<<"Enter three number one by one important dont give same number"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a>b && a>c){
        cout<<a<<"Is a grater number"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<"Is a greater number"<<endl;
    }
    else if(c>a && c>b){
        cout<<c<<"It is greater number"<<endl;
    }
    else if(a==b || b==c || a==c) {
        cout<<"Enter Three Different number to check which one is grater"<<endl;
    }

};