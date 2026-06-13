#include <iostream>
using namespace std;


bool checkLeapYear(int year){
    if(year % 400 == 0) {
        return true;
    }
    else if(year % 100 == 0) {
        return false;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cout<<"Enter Year That You want to check leap year not leap year"<<endl;
    cin>>n;
    if(checkLeapYear(n)){
        cout<<n<<"It Is A Leap Year"<<endl;
    }
    else{
        cout<<n<<"It Is Not A Leap Year"<<endl;
    }
}