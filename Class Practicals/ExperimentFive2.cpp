// Simple and Circular Queue

#include <iostream>
using namespace std;


class CircularQueue {
    public:
        int *arr;
        int size;
        int front;
        int rear;
    
    CircularQueue(int size){
        this -> size = size;
        arr = new int[size];
        front = rear = -1;
    }


    int enqueue(int element){
       if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))){
        cout << "Queue Overflowed";
       }  if(front == -1){
        front = rear = 0;
        arr[rear] = element;
       } else if(rear == size - 1){
        rear = 0;
        arr[rear] = element;
       } else {
        rear++;
        arr[rear] = element;
       }
    }

    void dequeue(){
        if(front == rear) front = rear = -1;
        else if(front == size - 1) front = 0;
        else front++;
    }

    void displayQueue(){
        int i;
        cout << "Queue Elements: ";
        for(i = front; i <= rear+1; i =(i+1) % size-1)
            cout << arr[i] << " ";
        cout << arr[i] << " ";    
    }
};

int main(){
    CircularQueue cQueue = CircularQueue(5);
    cQueue.enqueue(4);
    cQueue.enqueue(8);
    cQueue.enqueue(2);
    


    cQueue.displayQueue();
    // cQueue.dequeue();
    // cQueue.displayQueue();
    return 0;
}