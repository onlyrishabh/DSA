// Simple and Circular Queue

#include <iostream>
using namespace std;

class SimpleQueue {
    public:
        int *arr;
        int size;
        int front;
        int rear;
    
    SimpleQueue(int size){
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int element){
        if(rear == size) cout << "Queue Overflowed";
        if(front == -1 && rear == -1) front = rear = 0;
        else rear = rear + 1;
        arr[rear] = element;
    }

    void dequeue(){
        if(front == -1) cout << "Queue Underflowed";
        else front++;
    }

    void displayQueue(){
        if(front == -1) cout << "Queue Underflowed";
        else {
            cout << "Queue Element: - ";
            for(int i = front; i <= rear; i++){
                cout << arr[i] << " ";
            }
        }
    }
};

int main(){
    SimpleQueue sQueue = SimpleQueue(10);
    sQueue.enqueue(3);
    sQueue.enqueue(8);
    sQueue.enqueue(4);

    sQueue.displayQueue();

    sQueue.dequeue();

    sQueue.displayQueue();
    return 0;
}