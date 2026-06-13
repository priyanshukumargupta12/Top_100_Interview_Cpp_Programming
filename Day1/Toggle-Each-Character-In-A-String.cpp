#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a Input word that you want to toggle"<<endl;
    getline(cin, str);

    // for(int i=0; str[i]!=0; i++) { 
    //     if(islower(str[i])){
    //         str[i] = toupper(str[i]);
    //     }
    //     else if(isupper(str[i])){
    //         str[i] = tolower(str[i]);
    //     }
    // }

    //Another Method
    for(int i= 0; str[i]!=0; i++){
      
        if(str[i]>=65 && str[i]<=90) {
            str[i] = str[i] + 32;
        }
        else if(str[i]>=97 && str[i]<=122){
            str[i] = str[i] - 32;
        }
    }


    cout<<str<<" "<<"Toggle Output of your string"<<endl;
}