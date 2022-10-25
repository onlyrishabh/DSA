// Linear and Binary Search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        } else if(target > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << linearSearch(arr, size, 5) << endl;
    cout << binarySearch(arr, size, 5) << endl;
    return 0;
}