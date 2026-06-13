#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a character to check it is alphabet or not"<<endl;
    cin>>ch;

    int x = (int)ch;

    if(65<=x && x<=90 || 97<=x && x<=122){
        cout<<ch<<" Yes it is a alphabet"<<endl;
    }
    else{
        cout<<ch<<" "<<"It is not a alphabet"<<endl;
    }
}