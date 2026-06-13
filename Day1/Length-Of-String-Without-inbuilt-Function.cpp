#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin, str);
    int lenthOfString=0;
    for(int i=0; str[i]!=0; i++){   //str.length();
        lenthOfString++;
    }
    cout<<lenthOfString<<" "<<"Length of given string"<<endl;

}