#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character to check wheather it is vowel or consonent"<<endl;
    cin>>ch;
    char arr[]= {'a', 'e', 'i', 'o' , 'u', 'A', 'E', 'I', 'O','U' };
    bool flag = false;
    for (int i = 0; i<10; i++) {
         if(ch==arr[i]){
            flag = true;
            break;
         }
    }

    if(flag == true) {
        cout<<ch<<" "<<"Yes It is a vowel character"<<endl;
    }

    else{
        cout<<ch<<" "<<"No It is not a vowel character, It is a Consonent"<<endl;
    }

    
}