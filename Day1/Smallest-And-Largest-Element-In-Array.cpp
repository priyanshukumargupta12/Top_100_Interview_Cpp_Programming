#include <iostream>
using namespace std;

int main() {
    int arr[5] = {6, 2, 7, 8, 4};
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i<5; i++) {
        if(arr[i]> max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<max<<" "<<"Largest Element"<<endl;
    cout<<min<<" "<<"Smallest Element"<<endl;
}