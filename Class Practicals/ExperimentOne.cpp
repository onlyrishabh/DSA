// Array Insertion and Deletion

#include <iostream>
using namespace std;

void arrayInsert(int arr[], int size, int position, int item){
    int i = size;
    while(i >= position){
        arr[i + 1] = arr[i];
        i--; 
    }
    arr[position] = item;
    size = size + 1;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void arrayDelete(int arr[], int size, int position){
    int i = position;
    size = size - 1;

    while(i < size){
        arr[i] = arr[i + 1];
        i++;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] ={6, 3, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // arrayInsert(arr, size, 2, 1);
    arrayDelete(arr, size, 2);
    return 0;
}