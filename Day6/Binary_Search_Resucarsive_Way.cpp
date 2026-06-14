#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int low, int high, int target){    //Time Complaxity = OLog(n) and Space Complaxity = OLog(n)

    if (low <= high){
        int mid = (low + high)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]<target){
        low = mid + 1;
        return BinarySearch(arr, low, high, target);
    }
    else if(arr[mid]>target){
        high = mid - 1;
        return BinarySearch(arr, low, high, target);
    }
    }

    return -1;
}
int main() {
    vector<int> arr ={2, 4, 6, 8, 10, 30 , 40};
    int target = 10;
    int n = arr.size();
    int res = BinarySearch(arr, 0, n-1, target);

    if(res == -1){
        cout<<"Element Not Found"<<endl;
    }
    else {
        cout<<"Element Is Persent At Index "<<res<<endl;
    }

}
