#include <iostream>
using namespace std;
  int findsum(int n){
        int sum =0;
          if(n > 0) {
         for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    cout<<sum<<" "<<"Sum of Natural Number"<<endl;
   
    }
    else if(n == 0) {
        cout<<"Enter Non-Zero Input"<<endl;
    }
    else if(n<0) {
        cout<<"Enter Positive Number"<<endl;
    }
   
     return sum;
    };


int main() {
    int n;
    cout<<"Enter Input"<<endl;
    cin>>n;

    findsum(n);

    return 0;
}