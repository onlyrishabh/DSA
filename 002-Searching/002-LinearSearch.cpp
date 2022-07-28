#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = (start + end) / 2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int arr[] = {3, 1, 6, 8, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, size, 9);
    return 0;
}