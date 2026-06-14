#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int target){  // Time Complaxity = OLog(n) and Space Complaxity = O(1)
    int low = 0;
    int high = arr.size() - 1;
    while(low<= high){
        //int mid = (high + low) /2 ;
        int mid = low + (high - low) /2 ;
        if(arr[mid] == target){
            return mid; 
        }
        else if(arr[mid]<target){
            low = mid + 1;
            
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }

    }
    return -1;

}

int main() {
    vector<int> arr = {2, 3, 4 ,10, 40};
    int target = 10;
    int res = BinarySearch(arr, target);
    if(res == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is persent "<<res<<endl;
    }
    return 0;
    
}