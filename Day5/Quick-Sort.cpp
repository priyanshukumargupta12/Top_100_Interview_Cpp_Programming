#include <iostream>
#include <vector>
using namespace std;

//Partition Function
int partition(vector<int> &arr, int start, int end){
    int idx = start -1, pivot = arr[end];
    for(int j = start; j < end; j++){
        if(arr[j]<=pivot) { //To sort array in desending order change --> if(arr[j]>=pivot)
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

//Recursion Function
void Quicksort(vector<int> &arr, int start, int end){
    if(start < end){
        int pivIdx = partition(arr, start, end);
        //lefthalf
        Quicksort(arr, start, pivIdx-1);
        //righthalf
        Quicksort(arr, pivIdx +1, end);
    }
}

int main() {
    vector<int> arr = {12, 31, 35, 8 , 32, 17};
    Quicksort(arr, 0, arr.size()-1);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}