// Array Insertion and Deletion

#include <iostream>
using namespace std;

void arrayInsert(int arr[], int size, int position, int item){
    for(int i = size; i < position; i--){
        arr[i + 1] = arr[i];
    }
    arr[position] = item;
}

void arrayDelete(int arr[], int size, int position){
    for(int i = position; i < size; i++){
        arr[i] = arr[i + 1];
    }
    size = size - 1;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] ={1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrayInsert(arr, size, 2, 9);
    printArray(arr, size);
    return 0;
}