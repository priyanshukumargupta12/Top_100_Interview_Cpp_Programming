#include <iostream>
#include <vector>
using namespace std;

//Merging 
void merge(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    while(i <= mid && j <= end){
        if(arr[i]<= arr[j]){ //for decreasing order change to --> arr[i]>= arr[j]
            temp.push_back(arr[i]);
            i++;

        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }

         while(j <= end){
            temp.push_back(arr[j]);
            j++;
        }

        for(int k = 0; k < temp.size(); k++){
            arr[k + start] = temp[k];
        }

        
    } 



//Recursion Function
void MergeSort(vector<int> &arr, int start, int end){ //Vector ko as a reference pass kiyai hai taki changes refelect kare
    if(start < end){  //Base Case
    int mid = start + (end - start) / 2;
    MergeSort(arr, start, mid); //lefthalf
    MergeSort(arr, mid +1, end); //righthalf


    merge(arr, start , mid, end); //Call the merge function after recursilvly divide the array

    }
   
}
int main() {
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    MergeSort(arr, 0, arr.size()-1);
    for(int val : arr){ //for ech loop
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}