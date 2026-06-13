#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {6, 2, 7, 8 ,1};
    
    int smallest = INT_MAX;
    int secondsmallest = INT_MAX; 
    for(int i = 0; i<5; i++) {
        if(arr[i]< smallest ) {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondsmallest && arr[i] != smallest) {
            secondsmallest = arr[i];
        }

        }

        if(secondsmallest == INT_MAX) {
            cout<<"There is no second element"<<endl;
        }
        else {
            cout<<"Second Smallest element is "<<secondsmallest<<endl;
        }
    }

