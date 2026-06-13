#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"Enter Input In Which You Want To Remove Vowel"<<endl;
    getline(cin, str);

    char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    string result = "";
    for(int i = 0; str[i]!=0; i++){
        bool flag = false;
        for(int j = 0; j < 10; j++){
            if(str[i] == arr[j]){
                flag = true;
                break;
            }
           
        }
        if (flag == false) {
            result = result + str[i];
           }
    }

   
    cout<<result<<" "<<"Removed Vowel From Input"<<endl;
}