// Various operations on a stack

#include <iostream>
using namespace std;

void pushStack(int stack[], int size, int top, int item){
    if(top >= size - 1){
        cout << "Stack Overflow" << endl;
        return;
    } else {
        top++;
        stack[top] = item;
    }
}


int main(){
    int stack[10] , size = 10, top = 0;
    
    return 0;
}