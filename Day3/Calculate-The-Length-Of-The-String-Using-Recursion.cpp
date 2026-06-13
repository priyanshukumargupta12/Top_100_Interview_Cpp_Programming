#include <iostream>
using namespace std;

int cal(char *str){
    if(*str == '\0') {
        return 0;
    }
    else{
        return 1 + cal(str + 1);
    }
}

int main() {
    char str[] = {0} ;
    cout<<"Enter Input String"<<endl;
    cin>>str;
    cout<<cal(str)<<endl;
    return 0;
}