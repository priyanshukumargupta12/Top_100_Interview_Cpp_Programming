#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a Input String to count vowel"<<endl;
    getline(cin, str);

    int count = 0;
    char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    for(int i = 0; str[i]!=0; i++){
        for(int j = 0; j<10; j++){
            if(str[i] == arr[j]) {
                count = count + 1;
            }
            else {
                continue;
            }
        }
        
    }

    cout<<count<<" "<<"The Number Of Vowel In Given Input"<<endl;

}