#include <iostream>
using namespace std;

int main() {
    int arr[5] = {6, 2, 5, 8, 1};

    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    cout<<sum<<" "<<"Sum Of Elements In Array"<<endl;
}