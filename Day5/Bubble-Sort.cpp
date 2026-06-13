#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size Of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Element Of Array"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i <= n-1; i++){   //Time Complaxity --> Worst Case = O(n^2) --> Best Case = O(n)
        for(int j = 0; j <= n-i; j++){ //Space Complaxity --> O(1)
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}