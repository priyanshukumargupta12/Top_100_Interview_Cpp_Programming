#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter Input From Which You Want To Remove Character Except Alphabet"<<endl;
    getline(cin, str);

    string result = "";
    for(int i = 0; str[i]!=0; i++){
        if(str[i]>=65 && str[i]<=90 || str[i]>=90 && str[i]<=122) {
            result = result + str[i];
        }
        else {
            continue;
        }
    }

    cout<<result<<" "<<"Removed Result"<<endl;
}