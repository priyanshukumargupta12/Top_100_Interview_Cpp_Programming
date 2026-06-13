# include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter Number to check it is a even or odd"<<endl;
    cin>>n;

    bool flag = false;

    if(n%2 == 0){
        flag = true;
        cout<<"It is a even number"<<endl;
    }
    else{
        cout<<"It is a odd number number"<<endl;
    }
}