#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout<<"Enter Three number to check: "<<endl;
    cin>>a>>b>>c;
    //Another method

    int arr[3] = {a, b, c};
    int gretest = arr[0];

    for(int i= 0; i<3; i++){
        if(arr[i]>gretest) {
            gretest = arr[i];
        }
    }

     cout<<gretest<<" "<<"This is greater"<<endl;

    
}
