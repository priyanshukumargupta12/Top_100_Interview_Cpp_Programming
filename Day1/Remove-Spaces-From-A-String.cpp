#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter Input String"<<endl;
    getline(cin, str);

    string result = " ";

    for(int i = 0; str[i]!=0; i++){
        if(str[i] !=' ') {
            result = result + str[i];
        }
    
    }

    cout<<result<<" "<<"Output"<<endl;
}