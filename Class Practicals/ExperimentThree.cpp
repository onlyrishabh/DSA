// Various operations on a stack

#include <iostream>
using namespace std;

class Stack {
    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        } else cout << "Stack Overflow" << endl;
    }

    void pop(){
        if(top >= 0) top--;
        else cout << "Stack Underflow" << endl;
    }

    void peak(){
        if(top >= 0) cout << arr[top] << endl;
        else cout << "Stack Is Empty" << endl;
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};

int main(){
    Stack stack = Stack(5);

    stack.push(7);
    stack.peak();
    stack.push(3);
    stack.peak();

    cout << stack.isEmpty() << endl;

    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}