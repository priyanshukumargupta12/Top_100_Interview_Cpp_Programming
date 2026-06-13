#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Size Of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Element Of Array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 1; i < n; i ++){
        int temp = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}